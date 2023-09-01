#include "main.h"

/**
 * set_bit - assign a bit to a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to be changed to 1
 * Return: 1 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 75)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
