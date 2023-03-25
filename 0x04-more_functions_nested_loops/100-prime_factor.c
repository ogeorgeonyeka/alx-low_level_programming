#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i;
	int n;
	
	for (i = 3 ; i < 782849 ; i = i + 2)
	{
		while (n % i == 0)
			n = n / i;
	}
	printf("%u\n", n);
	return (0);
}
