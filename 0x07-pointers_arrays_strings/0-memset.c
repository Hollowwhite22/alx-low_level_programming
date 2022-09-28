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
	int i;
	unsigned char p = s;

	for (i = 0; i < n; i++)
		p[i] = b;

	return (s);
}
