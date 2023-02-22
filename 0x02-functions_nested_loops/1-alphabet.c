#include "main.h"
/**
 * main - Entry point
 * decription : print a to z
 * return: void
 */

void print_alphabet(void);

int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
{
	_putchar(p);
}
	_putchar('\n');
	return (0);
}
