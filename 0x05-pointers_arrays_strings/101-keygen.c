#include <stdio.h>
#include <string.h>

/**
 * main - generates random valid password
 *
 * Return: always 0
 */

int main(void)
{
	char a[10], c[10];
	int i, j, k = 0;

	printf("./101-keygen \n\n");

	while (k < 5 || k >= 10)
	{
		if (k != 0)
			printf("\nThe username length should be 5 to 10 alphabets\n");
		printf("enter username: ");
		scanf("%s", a);

		k = strlen(a);
	}

	i = k - 1;
	j = 0;

	while (i >= 0)
	{
		c[j] = a[i] + i;
		i--;
		j++;
	}

	c[j] = 0;
	printf("\nThe password is %s\n", c);
	printf("\nHit Enter to Exit\n");
	getchar();
	getchar();
}

