#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: A pointer to a character array
 * @src: A pointer to a character array
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	char *p, i = 0, j;

	while (*(dest + i) != '\0')
		i++;

	for (j = 0; *(src + j) != '\0'; i++, j++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';

	p = dest;

	return (p);
}
