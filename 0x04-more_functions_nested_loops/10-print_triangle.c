#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: integer of the triangle size
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				_putchar(' ');
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
