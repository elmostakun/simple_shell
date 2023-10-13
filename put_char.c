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
