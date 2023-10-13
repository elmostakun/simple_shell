#include "shell.h"

/**
 * builtin - builtin cmd program
 *
 * Return: returns 0 if success
 */

int builtin(void)
{
	if (!cmd[0])
		return (0);
	if (!_compare(cmd[0], "exit"))
	{
		stat_s = exitstat(cmd[1]);
		return (0);
	}

	if (!_compare(cmd[0], "env"))
	{
		putarray(environ);
		return (0);
	}
	return (-1);
}
