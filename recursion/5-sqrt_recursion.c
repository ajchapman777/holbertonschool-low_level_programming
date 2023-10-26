#include "main.h"
/**
 * _sqrt_recursions - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: square root or -1
 */
int _sqrt_recursion(int a, int b)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0);
}
/**
 * actual_sqrt_recursion - recurses to fine the natural square root of a number
 * @i: iterator
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recusrion(n, i + 1));
}
