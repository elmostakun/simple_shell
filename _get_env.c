#include "shell.h"

/**
 * _get_env - Finds a environment variable name and returns it's value
 * @param: Environment variable to lookup
 *
 * Return: address of the location
 */

char *_get_env(char *param)
{
	int k, s_len = _leng(param);
	char *_val = NULL;

	for (k = 0; environ[k]; k++)
	{
		if (!_compare(environ[k], param, s_len) && environ[k][s_len] == '=')
		{
			_val = environ[k] + _leng(param) + 1;
			return (_val);
		}
	}
	return (_val);
}
