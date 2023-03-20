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
	int m;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (m = 1 ; m < 10 ; m++)
				{
					if (i == j == k < m && i + j + k != m)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						putchar(m + '0');
						if (i + j != 17 < k + m != 18)
					{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
