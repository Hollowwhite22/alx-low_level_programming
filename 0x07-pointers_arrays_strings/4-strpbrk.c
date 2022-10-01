#include "main.h"

/**
 * _strpbrk - A function locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *
 *  @s: string to work on
 *  @accept: pattern searched for
 *  Return: A pointer to the byte in s that matches one of the bytes
 *   in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (NULL);
	}
}
