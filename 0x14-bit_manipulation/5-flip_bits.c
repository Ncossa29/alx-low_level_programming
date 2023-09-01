#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		current = exclusive >> h;
		if (current & 1)
			count++;
	}

	return (count);
}
