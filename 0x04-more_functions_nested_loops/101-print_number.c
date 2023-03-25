#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * REturn: Always 0
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
		_putchar('\n');
	}
	_putchar('\n');
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
	_putchar('\n');
}
