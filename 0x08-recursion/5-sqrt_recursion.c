#include"main.h"

/**
 * _real_sqrt_recursion - find root of a number
 * @n: the variable
 * @x: iterator
 * Retun: results of root
 */

int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);

	return (real_sqrt_recursion(n, x + 1));
}


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (real_sqrt_recursion(n, 0));
}
