#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of changed bits 
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, countbit = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		cur = exclusive >> t;
		if (cur & 1)
			countbit++;
	}

	return (countbit);
}
