#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: pointer variable to search in
 * @c: constant to search for
 * Return: pointer to first occurence of c if it's there or NULL otherwise
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++)
	return (NULL);
}
