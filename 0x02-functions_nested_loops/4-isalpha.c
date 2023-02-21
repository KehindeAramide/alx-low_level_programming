#include "main.h"
/**
 * _isalpha - function to check for alphabet
 * @c: input argument for the function
 * Return: 1 if c is alphabet
 * and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);
	_putchar('\n');
}
