#include "main.h"

/**
 * malloc_checked - cause normal process termination witg a status value of 98
 * @b: allocated memory
 *
 * Return: a poiter ti the aklocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
