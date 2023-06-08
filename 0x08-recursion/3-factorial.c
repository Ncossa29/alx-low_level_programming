#include"main.h"

/**
 * int factorial - function prototype
 * @n: the variable
 * return: output -1 if there is an error
 */

int factorial(int n)
{
	if (n<0)
		return (-1);
	if (n==0)
		return(1);

	return (n*factorial(n - 1));
}
