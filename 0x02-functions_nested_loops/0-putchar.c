#include "main.h"
/**
 * main - Entry point
 *
 * Description: A program that prints _putchar, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char c = '_putchar';
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
