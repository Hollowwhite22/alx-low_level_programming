#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
