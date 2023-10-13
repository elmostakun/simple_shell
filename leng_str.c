#include "shell.h"

/**
 * _leng - returns the length of a string
 * @string: count the length
 * Return: length.
 */

int _leng(char *string)
{
int leng = 0;

while (*string != '\0')
{
string++;
leng++;
}
return (leng);
}
