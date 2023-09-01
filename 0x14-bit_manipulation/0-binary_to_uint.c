#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: Has the binary number
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int int_n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		int_n = 2 * int_n + (b[i] - '0');
	}

	return (int_n);
}
