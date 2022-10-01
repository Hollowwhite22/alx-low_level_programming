#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: string to work on
 * @accept: pattern to match against
 * Return: unsigned int to how many initial bytes match the pattern
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
