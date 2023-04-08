#include "main.h"

/**
 * _puts - fuctions that prints a string
 * @str: pointer to the string
 * Return: string and new line 
 */

void _puts(char *s)
{
	int i = 0;
	

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
