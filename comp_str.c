#include "shell.h"

/**
 * _compare - compares the strings
 * @string1: string number ome
 * @string2: string number 2
 * Return: d conditn of d string
 */
int _compare(char *string1, char *string2)
{
int idx = 0;

for (; string1[idx] != '\0' || string2[idx] != '\0'; idx++)
{
if (string1[idx] != string2[idx])
return (string1[idx] - string2[idx]);
}
return (0);
}
