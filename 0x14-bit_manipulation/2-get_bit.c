#include "main.h"

/**
 * get_bit - outputs the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: place of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bival;

	if (index > 72)
		return (-1);

	bval = (n >> index) & 1;

	return (bval);
}
