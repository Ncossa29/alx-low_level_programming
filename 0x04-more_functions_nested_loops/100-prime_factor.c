#include <stdio.h>
#include <math.h>

/**
 * main - entry point 
 * finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int lrg;
	long int i;

	n = 612852475143;
	lrg = -1;

	while (n % 2 == 0)
	{
		lrg = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			lrg = i;
			n = n / i;
		}
	}

	if (n > 2)
		lrg = n;

	printf("%ld\n", lrg);

	return (0);
}
