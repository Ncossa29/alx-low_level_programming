#include"main.h"

/**
 * real_prime - prototype
 * description: calculate prime number recursively
 * @n: variable
 * @x: iterator
 * Return: output 1 if n is prime 0 if not
 *
 * is_prime_number - function prototype
 * descrption: state if number n is prime
 */

int real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);

	return (real_prime(n, x - 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (real_prime(n, n - 1));
}
