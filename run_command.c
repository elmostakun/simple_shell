#include "shell.h"

/**
 * run_command - function to run a command
 *
 * Return: the status of the command
 */

int run_command(void)
{
char *path_cmd;
pid_t bpid;
int ex_stat;

if (cmd[0] && builtin())
{
path_cmd = find_path();

if (path_cmd)
{
bpid = fork();
if (bpid == -1)
return (0);

else if (bpid == 0)
{
execve(path_cmd, cmd, environ);
perror("execve");
exit(EXIT_FAILURE);
}
else
{
waitpid(bpid, &ex_stat, 0);
if (WIFEXITED(ex_stat))
stat_s = WEXITSTATUS(ex_stat);
}
}
else
{
f_fprintf(2, "%a: %b: %c: not found\n", first_cmd, run_prompt, cmd[0]);
return (127);
}
free(path_cmd);
}

return (stat_s);
}
