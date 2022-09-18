#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			putchar("Fizz ");
		else if (n % 5 == 0)
			putchar("Buzz ");
		else if ((n % 3 == 0) && (n % 5 == 0))
			putchar("FizzBuzz ");
		else
			printf("%d ", n);
	}
	return (0);
}
