#include "main.h"

/**
 * print_most_numbers - A function that prints numbers from 0 to 9
 *			and a new line
 * Return: void
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n);

		if (n == 2 && n == 4)
			continue;
		else
			_putchar(n);


		n++;
	}
	_putchar('\n');
}
