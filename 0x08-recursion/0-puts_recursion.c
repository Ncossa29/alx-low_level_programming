#include"main.h"

/**
 * _puts_recrursion - prototype
 * @s: the input
 * Return: 0 Sucess
 */

void _puts_recursion(char *s);
{

	if(*s)

	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar("\n");
}
