#include "main.h"

/**
 * print_binary - display the binary code of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int code;

	for (t = 63; t >= 0; t--)
	{
		code = n >> t;

		if (code & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
