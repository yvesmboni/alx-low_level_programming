#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /* condition*/
		{
			return (s); /*result*/
		}

		++s;

	}

	if (*s == c)
	{
		return (s);
	}
	else

		return (0);/* values null*/
}
