#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print out alphabets in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{
	char1 = 'A';

	char2 = 'a';

	for (char1 = 'A'; char1 <= 'Z'; char1++)
	{
		putchar(char1);
	}

	for (char2 = 'a'; char2 <= 'z'; char2++)
	{
		putchar(char2);
	}

	putchar('\n');
	return (0);
}
