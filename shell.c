#include "shell.h"

/**
 * main - Entry point of the program
 * @argc:numbers of  argument
 * @argv: array of argument vectors
 * Return: 0 success, else failure
 */

int main(int argc, char *argv[])
{
	first_cmd = argv[0];
	run_prompt = 0;
	stat_s = 0;

	(void)argc;

	while (run_prompt)
	{
		prompt();
		getln(&ln);
		cmd = str_to_arr(ln, ' ');
		stats = exe_cmd();
		free(ln);
		freeArr(cmd);
	}

	return (stat_s);
}
