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

	for (len = 0; *(s + len) != '\0'; len--)
		_putchar(*(s + len));
	_putchar('\n');
}
