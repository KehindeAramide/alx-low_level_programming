#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address to be filled
 * @b: the desired value
 * @n: number of byte to be changed
 * Return: the changed value of byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
