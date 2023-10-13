#include "shell.h"

/**
 * take_line - have string from user and stores in a buffer
 * @ln: Buffer 4 d string 2 be stored
 *
 * Return: Number of charactrs red, if errr retrns -1;
 */
ssize_t take_line(char **ln)
{
char *bff = call_loc(12192, sizeof(char));
ssize_t idx = 0;


while ((read(0, &bff[idx], 1)) > 0 && (bff[idx] != '\n'))
idx++;

if (bff[idx] == '\n')
{
*ln = malloc(sizeof(char) * (idx + 1));
bff[idx] = '\0';
_cpy(*ln, bff);
free(bff);
return (idx);
}
else if (idx != 0)
{
bff[idx] = '\0';
*ln = malloc(sizeof(char) * (idx + 1));
_cpy(*ln, bff);
free(bff);
return (-1);
}
else
{
if (isatty(0))
f_fprintf(1, "\n", "nill", 0, "nill");
free(bff);
exit(stat_s);
}
}
