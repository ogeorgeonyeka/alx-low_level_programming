#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination arrary
 * @src: source array
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}

