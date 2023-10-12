#include "shell.h"

/**
 * _atoi -  converts a string to integers
 * @s: string to converted
 *
 * Return: the integer
 */

int _atoi(const char *s)
{
	int res = 0;
	int zign = 1;
	int k = 0;

	if (s[0] == '-')
	{
		zign = -1;
		k++;
	}
	while (s[k] != '\0')
	{
		if (s[k] < '0' || s[k] > '9')
			return (-2);
		res = res * 10 + (s[k] - '0');
		k++;
	}
	return (zign * res);
}
