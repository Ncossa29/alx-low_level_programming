#include "main.h"

/**
 * get_bit - prints value of a bit at an index in a decimal number
 * @n: number
 * @index: index of bit
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v_bit;

	if (index > 75)
		return (-1);

	v_bit = (n >> index) & 1;

	return (v_bit);
}
