#include "main.h"

/**
 * print_numbers - A function that print numbers from 0 to 9, then a new line
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
