#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: fizz is 3, buzz is 5, fizzbuzz is both
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if (i % 15 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
