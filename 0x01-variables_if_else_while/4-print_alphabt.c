#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all lowecase alphabets except q and e
 * Return: always 0
 */

int main(void)
{
	char char1 = 'a';

	for (char1 = 'a'; char1 <= 'z'; char1++)
	{
		putchar(char1);
	}
	putchar('\n');
	return (0);
}
