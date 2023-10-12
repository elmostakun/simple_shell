#include "shell.h"

/**
 * envir_get - functionto find environment variable
 * @check: The variable name to be found
 *
 * Return: a pointer to the varible's value
 */

char *envir_get(char *check)
{
int idx, stringlen = _leng(check);
char *val = NULL;

for (idx = 0; environ[idx]; idx++)
{
if (!cmp_str(environ[idx], check, stringlen) && environ[idx][stringlen] == '=')
{
val = environ[idx] + _leng(check) + 1;
return (val);
}
}
return (val);
}
