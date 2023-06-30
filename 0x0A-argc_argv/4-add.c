#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_num - checks string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Entry Point
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int count;
	int str;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str = atoi(argv[count]);
			sum += str;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
