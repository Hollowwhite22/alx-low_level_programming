#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: int type number
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 || c <= 91)
		return (1);
	else
		return (0);
}
