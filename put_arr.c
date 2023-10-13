#include "shell.h"

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
