#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program to print lowercase alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
