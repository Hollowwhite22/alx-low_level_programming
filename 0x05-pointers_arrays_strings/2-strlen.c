#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: pointer variable
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
