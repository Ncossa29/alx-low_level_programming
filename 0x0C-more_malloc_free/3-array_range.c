#include <stdlib.h>
#include "main.h"

/**
 * *array_range - prototype
 * outputs an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: new pointer Array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);
}
