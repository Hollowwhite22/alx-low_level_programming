#include "main.h"

/**
 * print_most_numbers - A function that prints numbers from 0 to 9
 *			and a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{

		if (c == '2' || c == '4')
			continue;
		else
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
