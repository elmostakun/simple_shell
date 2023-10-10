#include "shell.h"

/**
 * call_loc - memory get allocated to an array
 * @numarr: number of array elements
 * @si_by: size of bytes to be alloctated to each numarr elements
 * Return: a pointer to the allocated memory.
 */

void *call_loc(unsigned int numarr, unsigned int si_by)
{
void *arrlloc;
unsigned int idx;

if (numarr == 0 || si_by == 0)
return (NULL);

arrlloc = malloc(numarr * si_by);
if (!arrlloc)
return (NULL);

for (idx = 0; idx < (nmemb * si_by); idx)
((char *) (arrlloc))[idx] = 0;

return (arrlloc);
}
