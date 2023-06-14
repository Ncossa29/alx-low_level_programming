#include <stdlib.h>
#include "main.h"
/**
 * str_concat - trototype
 * Description: add s1 and s2 to get or size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: ptr sum
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = n = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);
	i = n = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[n] != '\0')
	{
		ptr[i] = s2[n];
		i++, n++;
	}
	ptr[i] = '\0';
	return (ptr);
}
