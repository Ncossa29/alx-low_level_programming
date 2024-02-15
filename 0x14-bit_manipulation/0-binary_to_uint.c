#include "main.h"

/**
 * binary_to_uint - converts from binary to an int
 * @b: string of the binary number
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int in;
	unsigned int decval = 0;

	if (!b)
		return (0);

	for (in = 0; b[in]; in++)
	{
		if (b[in] < '0' || b[in] > '1')
			return (0);
		decval = 2 * decval + (b[in] - '0');
	}

	return (decval);
}
