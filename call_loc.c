#include "shell.h"

/**
 * call_loc - mem get allocated to arr
 * @numarr: numbers of array
 * @si_by: size  alloctated to each numarr
 * Return: the allocated mem
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

for (idx = 0; idx < (numarr * si_by); idx++)
((char *) (arrlloc))[idx] = 0;

return (arrlloc);
}
