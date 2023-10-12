#include "shell.h"

/**
 * prompt - displays the prompt
 *
 * Return: interactive is 0 and non-interactive mode is 1
 */

int prompt(void)
{
	if (isatty(0))
		f_fputstr(1, "#cisfun$ ");

	return (0);
}
