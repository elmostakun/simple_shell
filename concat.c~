#include "shell.h"

/**
 * _cat - Concatinats 2 strs
 * @path: Destination of the string to be appended
 * @stpth: String appended 2 path
 * Return: Pointer
 */
char *_cat(char *path, char *stpth)
{
int path_idx = 0, st_idx = 0;

for (; path[path_idx] != '\0'; path_idx++)
;
for (; stpth[st_idx] != '\0'; st_idx++)
{
path[path_idx] = stpth[st_idx];
path_idx++;
}
path[path_idx] = '\0';
return (path);
}


/**
 * _cpy - Copies d str
 * @path: Destintn of d copied str
 * @stpth: source of the string to be copied to <path>
 * Return: pointer
 */

char *_cpy(char *path, char *stpth)
{
int idx;

for (idx = 0; stpth[idx] != '\0'; idx++)
path[idx] = stpth[idx];
path[idx] = '\0';
return (path);
}


/**
 * _dup - alocats mem 4 a str duplicat
 * @string: string
 * Return: memory
 */
char *_dup(char *string)
{
char *pointer_mem, *pointer_mem_char;
size_t length;

if (!string)
return (NULL);

for (length = 0; string[length]; length++)
;

pointer_mem = malloc(sizeof(char) * length + 1);
if (!pointer_mem)
return (NULL);

pointer_mem_char = pointer_mem;

while (*string)
{
*pointer_mem_char = *string;
string++;
pointer_mem_char++;
}
*pointer_mem_char = '\0';
return (pointer_mem);
}

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
