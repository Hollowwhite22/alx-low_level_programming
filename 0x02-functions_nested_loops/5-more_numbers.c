#include "main.h"

/**
 * more_numbers - print 10 times a number, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
