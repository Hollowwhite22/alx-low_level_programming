#include "main.h"
/**
 * times_table - Function prototype
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int n = 9;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i*j);
		}
		_putchar('\n');
	}
}
