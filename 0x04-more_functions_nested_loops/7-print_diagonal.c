#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(92);
			_putchar('\n');
		}

	}
}
