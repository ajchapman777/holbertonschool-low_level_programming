#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The number to start
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n < 98)
	{
	printf("%d, ", n);
	n++;
	}
	printf("%d", n);
	}
	else
	{
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	printf("%d\n", n);
	}
}
