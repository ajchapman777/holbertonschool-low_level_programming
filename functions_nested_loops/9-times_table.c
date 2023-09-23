#include "main.h"
/**
 * main - check the code for Holberton School students.
 * times_table - Prints the 9 times table
 * Description: This function prints the 9 times table in a specific format.
 *              It includes commas, spaces, and newlines for proper alignment.
 * Return: void (no return value)
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * column);

			if (column == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
