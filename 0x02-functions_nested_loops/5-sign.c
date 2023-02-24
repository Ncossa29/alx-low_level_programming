#include "main.h"
/**
 * print_sign - prototype
 * description: output sigh of number
 * @n: int to be checked
 * Return: retuns 1 if number = to zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
