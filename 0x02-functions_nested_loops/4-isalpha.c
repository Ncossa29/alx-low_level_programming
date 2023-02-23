#include "main.h"
/**
 * _isalpha - code chekcs if upper case
 * @c: is to be checked
 * description: code will check for uppercase char
 * Return: if is upper case 1 else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
