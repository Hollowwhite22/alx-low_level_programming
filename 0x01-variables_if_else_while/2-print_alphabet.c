#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program to print out the alphabets in lowercase
 * Return: always 0
 */
int main(void)
{
	char ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
