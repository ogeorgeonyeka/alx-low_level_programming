#include "main.h"

/**
 * _strchr - locates a character in astring
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: if c is found first occurence, if c is not found -NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
