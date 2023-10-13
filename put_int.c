#include "shell.h"

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
