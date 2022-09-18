#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar(92);
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		

	}
}
