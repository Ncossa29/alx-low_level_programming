#include "main.h"
/**
 * print_alphabet_x10 - function
 * description: print a-z ten times
 * nested loop
 */
void print_alphabet_x10(void)
{
	char p;
	int n;

	n = 0;

	while (n < 10)
	{
		p = 'a';
		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
	_putchar('\n');
	n++;
	}
}
