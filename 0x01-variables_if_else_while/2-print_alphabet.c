#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program to print out the alphabets in lowercase
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
