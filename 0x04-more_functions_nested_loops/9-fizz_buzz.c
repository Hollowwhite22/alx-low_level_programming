#include <stdio.h>

/**
 * main - A function to print numbers from 1 to 100 and replace
 * Fizz, Buzz and FizzBuzz if the number is a multiple of 3 or 5 or both
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}

	return (0);
}
