#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination
 * @src: source
 * @n: number
 * Return: the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n &&src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
