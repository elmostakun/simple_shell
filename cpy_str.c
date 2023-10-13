#include "shell.h"

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
