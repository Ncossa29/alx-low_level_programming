#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num, t, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (t = 0; t < 5 && num >= 0; t++)
	{
		while (num >= coins[t])
		{
			result++;
			num -= coins[t];
		}
	}

	printf("%d\n", result);
	return (0);
}
