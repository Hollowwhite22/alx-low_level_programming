#include <stdio.h>
#include "main.h"

/**
 * print_numbers - A function that print numbers from 0 to 9
 *
 * @i: integer representing ascii value
 * Return: void
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
