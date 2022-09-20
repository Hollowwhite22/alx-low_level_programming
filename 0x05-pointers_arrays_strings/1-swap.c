#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: pointer variable
 * @b: pointer variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int sp = *a;

	*a = *b;
	*b = sp;
}
