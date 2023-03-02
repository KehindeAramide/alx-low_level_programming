#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	for (k = 0 ; dest[k] != '\0' ; k++)
	{
		i++;
	}
	for (k = 0; src[k] != '\0' ; k++)
	{
		j++;
	}
	for (k = 0; k < n; k++)
		dest[k + i] = src[k];
	return (dest);
}
