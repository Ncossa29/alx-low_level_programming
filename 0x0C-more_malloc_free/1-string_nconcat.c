#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - prototype
 * description: concatenates two strings
 * @s1: string to
 * @s2: string from
 * @n: number of bytes concanated
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		ptr = malloc(sizeof(char) * (x + n + 1));
	else
		ptr = malloc(sizeof(char) * (x + y + 1));

	if (!ptr)
		return (NULL);

	while (i < x)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		ptr[i++] = s2[j++];

	while (n >= y && i < (x + y))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
