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
	for (; n < 98; n++)
	{
	printf("%d, ", n);
	}
	}
	else
	{
	for (; n > 98; n--)
	{
	printf("%d, ", n);
	}
	}
	printf("98\n");
}
