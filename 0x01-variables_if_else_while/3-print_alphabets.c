#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print out alphabets in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{
	char char1 = 'A';

	char char2 = 'a';

	for (char2 = 'a'; char2 <= 'z'; char2++)
	{
		putchar(char2);
	}

	for (char1 = 'A'; char1 <= 'Z'; char1++)
	{
		putchar(char1);
	}

	putchar('\n');
	return (0);
}
