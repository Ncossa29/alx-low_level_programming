#include "main.h"

/**
 * set_bit - sets a bit = 1 at a certain index
 * @n: number to set
 * @index: index of the bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sb = 1 << index;
	*n = *n | sb;
	return (1);
}
