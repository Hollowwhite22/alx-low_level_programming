#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 *
 * @dest: A pointer to a character array
 * @src: A pointer to a character array
 * @n: number of characters to be added
 *
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p, i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + j) = '\0' || j == n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
