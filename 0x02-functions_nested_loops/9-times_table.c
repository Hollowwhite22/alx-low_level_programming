#include "main.h"
/**
 * times_table - Function prototype
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int n = 0;

	while (n <= 9)
	{
		i = 0;

		while (i <= 9)
		{
			j = i * n;

			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(j + '0');
			}
			else
			{
				_putchar(j + '0');
			}


			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n')
		n++;
	}
}
