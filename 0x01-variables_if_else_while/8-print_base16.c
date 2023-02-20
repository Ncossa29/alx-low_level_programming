#include <stdio.h>
/**
 * main - entry point
 * Decription: print base16
 * Return: always 0
 */
int main(void)
{
	int i;
	char n;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
