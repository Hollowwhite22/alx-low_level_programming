#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: pointer variable to search in
 * @c: constant to be checked
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++)
	return (NULL);
}
