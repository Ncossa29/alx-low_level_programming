#include "main.h"
/**
 * _islower - code checks if is low case
 * @c : int to be checked
 * Return: if lowecase 1 or 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
