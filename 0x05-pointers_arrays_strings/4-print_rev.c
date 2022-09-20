#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 *
 * @s: pointer variable
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	
	len--;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
