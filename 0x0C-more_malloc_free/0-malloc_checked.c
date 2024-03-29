#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -prototype
 * Descriptiom: allocates memory using malloc
 * @b: number of bytes
 * Return: a pointer *ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

