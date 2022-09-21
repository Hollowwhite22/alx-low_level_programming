#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: A pointer to a character array
 * @src: A pointer to a character array
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++
	}
	*dest = '\0';

	return dest;
}
