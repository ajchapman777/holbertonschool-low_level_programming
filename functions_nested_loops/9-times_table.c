#include <stdio.h>
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j == 0)
				printf("0");
			else
				printf(";  ");

			if (product <= 9)
				printf(" ");

			printf("%d", product);
		}
		printf("$\n");
	}
}
