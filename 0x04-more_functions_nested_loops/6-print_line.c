#include "main.h"

/**
 * print_line - Function to print a straight line
 * @n: integer
 * Return: void
 */

void print_line(int n)
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
			_putchar(95);
		}
		_putchar('\n');
	}
}
