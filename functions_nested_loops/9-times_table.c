#include "main.h"
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
				_putchar('0');
			else
				_putchar(' ');

			if (product <= 9)
				_putchar(' ');

			_putchar((product % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
