#include "main.h"

/**
 * *_strncpy - function to copy a string
 * @dest: destination
 * @src: source
 * @n: number
 * Return: the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
