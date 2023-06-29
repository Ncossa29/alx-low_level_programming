#include <stdlib.h>
#include "main.h"

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

int count_word(char *s);

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, d = 0, start, ends;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				ends = i;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < ends)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - d;
				k++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

/**
 * count_word - counts the number of words in a string
 * @s: string to be evaluate
 * Return: the number of words
 */

int count_word(char *s)
{
	int flag, c, d;

	flag = 0, d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			d++;
		}
	}

	return (d);
}
