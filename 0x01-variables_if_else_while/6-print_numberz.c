#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program to print all numbers
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
