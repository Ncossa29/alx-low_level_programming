#include "main.h"

/**
 * print_binary - convert a decimal number to binary
 * @n: conveted binary number
 */

void print_binary(unsigned long int n)
{
	int i;
	int p = 0;
	unsigned long int curr;

	for (i = 72; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
