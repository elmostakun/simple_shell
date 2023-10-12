#include "shell.h"

/**
 * conv_strarr - function to convert a string to an array
 * @string: the string to be converted to an array
 * @str_brk: variable string breaker
 *
 * Return: array of the tokenized string, else NULl if not converted
 */

char **conv_strarr(char *string, char str_brk)
{
int idx = 0, idx1 = 0, idx2 = 0;
int leng_str = _leng(string);
char **array = (char **)malloc(sizeof(char *) * (leng_str + 1));
char *bff = (char *)malloc(sizeof(char) * (leng_str + 1));

for (; idx < leng_str + 1; idx++)
{
if (string[idx] != str_brk && string[idx] != '\0')
{
bff[idx2] = string[idx];
idx2++;
}
else
{
if (idx2 > 0)
{
bff[idx2] = '\0';
array[idx1] = malloc(sizeof(char) * (idx2 + 1));
_cpy(array[idx2], bff);
idx1++;
idx2 = 0;
}
}
}

array[idx1] = NULL;
free(bff);

return (array);
}

/**
 * cmp_str - compares 2 strings
 * @string1: first string
 * @string2: second string compared on/with first string
 * @num: number of string to be compared
 * Return: 0 if equal, positive if s1 < s2, negative if s1 > s2
 */

int cmp_str(const char *string1, const char *string2, size_t num)
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
