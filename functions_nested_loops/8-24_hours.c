#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @a: The number to compute the last digit of
 *
 * Return: The last digit of @a
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
