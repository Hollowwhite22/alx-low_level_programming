#include <unistd.h>
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

	while (num <= 9)
	{
		int putchar("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
