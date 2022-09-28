#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: byte to change
 * Return: pointer to the modified string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
