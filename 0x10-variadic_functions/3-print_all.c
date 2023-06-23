#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sept = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sept, va_arg(list, int));
					break;
				case 'j':
					printf("%s%d", sept, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sept, str);
					break;
				default:
					j++;
					continue;
			}
			sept = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
