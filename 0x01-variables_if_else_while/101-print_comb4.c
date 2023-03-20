#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 0 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if ((i < j) < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
