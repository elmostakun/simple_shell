#include "shell.h"

/**
 * f_fprintf - User defined printf
 * @filedes: A file descriptor parameter
 * @fomat: string to print + its format specs
 * @str1: string 1st
 * @str2: string 2nd
 * @nn1: number 01
 *
 * Return: count of printed characters
 */

int f_fprintf(int filedes, const char *fomat, char *str1, int nn1, char *str2)
{

	int in = 0, lent = 0;

	while (fomat[in])
	{
		if (fomat[in] != '%')
			lent += f_fputchar(filedes, fomat[in]);
		else
		{
			in++;
			if (fomat[in] == 'a')
				lent += f_fputstr(filedes, str1);
			else if (fomat[in] == 'b')
				lent += f_fputint(filedes, nn1);
			else if (fomat[in] == 'c')
				lent += f_fputstr(filedes, str2);
		}
		in++;
	}

	return (lent);
}
