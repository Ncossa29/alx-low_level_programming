#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"/**
 * print_numbers - Prints numbers, followed by a new line.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * @separator: The string to be printed between numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int index;

	va_start(numbs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbs, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}
