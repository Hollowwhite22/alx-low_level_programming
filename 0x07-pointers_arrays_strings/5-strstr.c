#include "main.h"

/**
 * _strstr - A function that locates a substring
 *
 * @haystack: string to be search in
 * @needle: string to search for
 * Return: A pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					match = 0;
					break;
				}
				match = 1;
			}
			if (match)
				return (haystack + i);
		}
	}
	return (NULL);
}
