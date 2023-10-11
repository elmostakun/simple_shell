#include "shell.h"

/**
 * find_path - seeks through directories to find a cmd
 *
 * Return: full path of cmd if found, else nothing
 */
char *find_path(void)
{
	int ind = 0;
	char *_path_v = _get_env("PATH");
	char **_path_d, *_ab_path;

	if (_compare(cmd[0], "./", 2) == 0 || cmd[0][0] == '/' || _compare(cmd[0], "../", 3))
	{
		if (access(cmd[0], F_OK) == 0)
			return _dup(cmd[0]);
	}

	if (!_path_v)
		return (NULL);

	_path_d = str_to_arr(_path_v, ':');

	for (ind = 0; _path_d[ind]; ind++)
	{
		_ab_path = malloc(1024);
		_cpy(_ab_path, _path_d[i]);
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
