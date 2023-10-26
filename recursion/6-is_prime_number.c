#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if an integer is prime
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);

	return (check_prime(n, i - 1));
}
