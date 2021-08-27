#include "hsh_header.h"

/**
 * free_2D - function will free 2D arrays
 * @array: the 2D that will be freed
 */
void free_2D(char **array)
{
	int idx1;

	for (idx1 = 0 ;  array[idx1] != NULL ; idx1++)
	{
		free(array[idx1]);
	}
	free(array);
}
