#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates space to new pointer
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size from
 * @new_size: new size
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int h;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (h = 0; h < new_size; h++)
			ptr1[h] = old_ptr[h];
	}

	if (new_size > old_size)
	{
		for (h = 0; h < old_size; h++)
			ptr1[h] = old_ptr[h];
	}

	free(ptr);
	return (ptr1);
}
