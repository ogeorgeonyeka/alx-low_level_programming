#include "main.h"

/**
 * _memcpy - function copies on bytes from memory
 * @n: function copies
 * @src: bytes from area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @ dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
