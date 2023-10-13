#include "shell.h"

/**
 * c_s - compares 2 strings
 * @string1: first string
 * @string2: second string compared on/with first string
 * @num: number of string to be compared
 * Return: 0 if equal, positive if s1 < s2, negative if s1 > s2
 */

int c_s(const char *string1, const char *string2, size_t num)
{
size_t idx;

for (idx = 0; idx < num; idx++)
{
if (string1[idx] == '\0' || string2[idx] == '\0')
return (string1[idx] - string2[idx]);

if (string1[idx] != string2[idx])
return (string1[idx] - string2[idx]);
}
return (0);
}
