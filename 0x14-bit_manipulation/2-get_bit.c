#include "main.h"

/**
 * get_bit - outputs the value of a bit in a certain place
 * @n: number to be searched
 * @index: place of bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
