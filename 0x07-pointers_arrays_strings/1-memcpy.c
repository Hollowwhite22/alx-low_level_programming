#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @dest: destination to be copied to
 * @src: string to be copied
 * @n: number of bytes
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest == NULL)
		return (NULL);
	for (int i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
