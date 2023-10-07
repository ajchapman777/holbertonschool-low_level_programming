#include "main.h"
/**
 * *_strncpy - function
 * @dest: parameter one
 * @src: parameter two
 * @n: parameter three
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int bytes;

	for (bytes = 0; bytes < n && src[bytes] != '\0'; bytes++)
		dest[bytes] = src[bytes];

	for (; bytes < n; bytes++)
		dest[bytes] = '\0';

	return (dest);
}
