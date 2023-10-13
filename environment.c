#include "shell.h"

/**
 * envir_get - functionto lookup environment var
 * @check: var to lookup
 *
 * Return: a pointer to varible's value locatn
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
