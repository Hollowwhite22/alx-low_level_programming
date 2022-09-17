#include "main.h"

/**
 * print_most_numbers - A function that prints numbers from 0 to 9
 *			and a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c == '2' || c == '4')
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
