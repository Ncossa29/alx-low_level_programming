#include "main.h"

/**
 * clear_bit - sets certain bit to 0
 * @n: pointer of number to change
 * @index: index of the bit 
 * Return: -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 75)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
