#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: pointer variable
 * Return: int
 */

int _strlen(char *s)
{
	while (*(s + len) != '\0')
		len++;

	return (len);
}
