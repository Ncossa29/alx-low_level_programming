#include "main.h"

/**
 * expo - function that calculates ther power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of the exponent
 */
unsigned long int expo(unsigned int base, unsigned int power)
{
	unsigned long int m;
	unsigned int a;

	m = 1;
	for (a = 1; a <= power; a++)
		m *= base;
	return (m);
}

/**
 * print_binary - ouputs a number from decimal to binary
 * @n: the bunary number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, step;
	char flag;

	flag = 0;
	d = expo(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		step = n & d;
		if (step == d)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
