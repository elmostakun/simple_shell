#include "shell.h"

/**
 * exitstat - exit shell function
 * @exitsta: exit status
 *
 * Return: exits with status or return 2
 */

int exitstat(char *exitsta)
{
	if (!exitsta)
	{
		free(ln);
		freeArr(cmd);
		exit(stat_s);
	}

	stat_s = _atoi(exitsta);

	if (stat_s >= 0)
	{
		free(ln);
		freeArr(cmd);
		exit(stat_s);
	}

	f_fprintf(2, "%a: %b: exit: ", first_cmd, run_prompt, "nill");
	f_fprintf(2, "Illegal number: %a\n", exitsta, 0, "nill");

	return (2);
}
