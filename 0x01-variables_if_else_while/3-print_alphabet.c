#include <stdio.h>
/**
 * main - Entry point
 * description: output a-z and A-Z
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

		putchar('\n');
		return (0);
}
