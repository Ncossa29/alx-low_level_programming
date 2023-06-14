#include<stdlib.h>
#include"main.h"

/**
 * _strdup - prototype
 * Description: copy str to new memory space location
 * @str: pointer variable
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
	return (NULL);

	for (k = 0; str[k]; k++)
		a[k] = str[k];
	return (a);
}
