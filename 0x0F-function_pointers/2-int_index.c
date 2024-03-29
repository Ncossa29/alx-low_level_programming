#include "function_pointers.h"

/**
 * int_index - Prototype
 * @array: array
 * @cmp: pointer to func of one of the 3 in main
 * @size: size of elements in array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
