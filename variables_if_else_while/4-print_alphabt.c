#include <stdio.h>

/**
 * main - functionof the task
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	{
	if (x != 'q' && x != 'e')
		putchar(x);
	}
	putchar('\n');
	return (0);
}
