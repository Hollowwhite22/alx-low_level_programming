#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char is: %c byte(s) \n", sizeof(char));
	printf("Size of an int is: %d byte(s) \n", sizeof(int));
	printf("Size of a short int is: %d byte(s) \n", sizeof(short int));
	printf("Size of a long int is: %ld byte(s) \n", sizeof(long int));
	printf("Size of a float is: % byte(s) \n", sizeof(float));
	printf("Size of a double is: %lf byte(s) \n", sizeof(double));
	printf("Size of a long double is: %Lf byte(s) \n", sizeof(long double));
	return (0);
}
