#include <stdio.h>
/**
 * main - Entry point
 * description: output a-z except e and q
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z'; n++)
		if (n != 'e' && n != 'q')
			putchar(n);

		putchar('\n');
	return (0);
}
