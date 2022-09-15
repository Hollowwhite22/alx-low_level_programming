#include "main.h"
/**
 * _isalpha - Function prototype
 * @c: Integer representing the ascii values
 * Return: 1 if is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
