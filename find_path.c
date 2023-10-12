#include "shell.h"

/**
 * find_path - seeks through directories to find a cmd
 *
 * Return: full path of cmd if found, else nothing
 */
char *find_path(void)
{
	int ind = 0;
	char *_path_v = envir_get("PATH");
	char **_path_d, *_ab_path;

	if (cmp_str(cmd[0], "./", 2) == 0 || cmd[0][0] == '/' || cmp_str(cmd[0], "../", 3))
	{
		if (access(cmd[0], F_OK) == 0)
		return (_dup(cmd[0]));
	}

	if (!_path_v)
		return (NULL);

	_path_d = conv_strarr(_path_v, ':');

	for (ind = 0; _path_d[ind]; ind++)
	{
		_ab_path = malloc(1024);
		_cpy(_ab_path, _path_d[ind]);
		_cat(_ab_path, "/");
		_cat(_ab_path, cmd[0]);

		if (access(_ab_path, F_OK) == 0)
		{
			freeArr(_path_d);
			return (_ab_path);
		}
		free(_ab_path);
	}
	freeArr(_path_d);

	return (NULL);
}
