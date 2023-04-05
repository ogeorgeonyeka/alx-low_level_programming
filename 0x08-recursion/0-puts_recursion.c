#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string
 * Return: void
 */

void_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
