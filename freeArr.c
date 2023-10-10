#include "shell.h"

/**
 * freeArr - frees the memmory allocated to array
 * @array: data block to free
 *
 * Return: void
 */

void freeArr(char **array)
{
	int ind;

	if (!array)
		return;

	for (ind = 0; array[ind] != NULL; ind++)
		free(array[ind]);

	free(array);
}
