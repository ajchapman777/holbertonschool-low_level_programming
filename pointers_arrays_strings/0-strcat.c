#include "main.h"
/**
 * _strcat - concatenates two strings together
 * @dest: destination parameter one
 * @src: source parameter two
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen = i] = src[i];
	}
	return (0);
}
