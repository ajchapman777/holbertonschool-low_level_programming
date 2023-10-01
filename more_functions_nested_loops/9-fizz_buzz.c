#include <stdio.h>
/**
 * main - function prints the numbers from 1-100
 * for multiples of 3 Fizz is printed instead of the number
 * for multiples of five Buzz is printed
 * for multiples of both 3 and 5, FizzBuzz is printed
 * Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		
		printf(" ");
	}
	printf("\n");
	
	return (0);
}
