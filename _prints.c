#include "shell.h"

/**
 * f_fputchar - user defined putchar function
 * @filedes: file descriptor parameter in the funct
 * @cc: character to print to terminal
 * Return: success for one.
 */

int f_fputchar(int filedes, char cc)
{
	return (write(filedes, &cc, 1));
}

/**
 * f_fputstr - User defiend fputs function
 * @filedes: parameter for a file descriptor
 * @s: string to print
 *
 * Return: count of characters printed less one
 */

int f_fputstr(int filedes, char *s)
{
	int in;

	if (!s)
		return (f_fputstr(filedes, "(null)"));
	for (in = 0; s[in]; in++)
		f_fputchar(filedes, s[in]);

	return (in);
}

/**
 * f_fputint - show integer at terminal
 * @filedes: A file descriptor parameter
 * @numba: number to print
 *
 * Return: count of characters printed less one
 */

int f_fputint(int filedes, int numba)
{
	int v, l = 0;

	if (!numba)
	{
		l += f_fputchar(filedes, '0');
		return (l);
	}
	if (numba == _MIN)
	{
		l += f_fputstr(filedes, "-2147483648");
		return (l);
	}
	if (numba < 0)
	{
		l += f_fputchar(filedes, '-');
		numba = -numba;
	}

	v = numba % 10;
	numba = numba / 10;
	if (numba)
		l += f_fputint(filedes, numba);
	l += f_fputchar(filedes, v + '0');

	return (l);
}

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

/**
 * putarray - put an array to terminal
 * @arr: array to print
 *
 * Return: coount of characters printed
 */

int putarray(char *arr[])
{
	int in = 0;

	while (arr[in])
	{
		f_fprintf(1, "%a\n", arr[in], 0, "nill");
		in++;
	}
	return (0);
}
