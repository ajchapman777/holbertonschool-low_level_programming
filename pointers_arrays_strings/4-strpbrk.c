#include "main.h"
/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{

			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (0);
}
