#include "shell.h"

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
