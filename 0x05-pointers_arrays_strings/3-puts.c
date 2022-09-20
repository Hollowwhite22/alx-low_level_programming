#include "main.h"

/**
 * _puts - A function that prints a tring followed by a new line
 *
 * @str: pointer variable
 * Return: void
 */

void _puts(char *str)
{
	int len;

	for (len = 0; *(str + len) != '\0'; len++)
		_putchar(*(str + len));
	_putchar('\n');
}
