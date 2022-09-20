#include "main.h"

/**
 * rev_string - A function that prints a string in reverse
 *
 * @s: pointer variable
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i, length;

	char c;

	while (*(s + len) != '\0')
	{
		len++;
	}

	length = len;

	len--;

	for (i = 0; i < length / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = c;
		len--;
	}
}
