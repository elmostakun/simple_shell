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
