#include"main.h"

/**
 * real_prime - prototype
 * calculate prime number recursively
 * @n: variable
 * @x: iterator
 * is_prime_number -  n is prime?
 * Return: output 1 if n is a prime 0 if not
 */

int real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);

	return (real_prime(n, x - 1));
}
/**
 * function state if n is a prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (real_prime(n, n - 1));
}
