#include <stdlib.h>
#include "main.h"

/**
 * *_memcal - fills memory with a constant byte
 * @s: memory area to be filled
 * @j: char to copy
 * @n: number of times to copy j
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the area s
 */

char *_memcal(char *s, char j, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = j;
	}

	return (s);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memcal(ptr, 0, nmemb * size);

	return (ptr);
}
