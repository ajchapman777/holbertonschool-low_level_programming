#include "main.h"
/**
 * main - check the code for Holberton School students.
 * times_table - Prints the 9 times table
 * Description: This function prints the 9 times table in a specific format.
 *              It includes commas, spaces, and newlines for proper alignment.
 *
 * Return: void (no return value)
 */
void times_table(void)

{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x = y;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
