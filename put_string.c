#include "shell.h"

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
