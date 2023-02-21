#include "main.h"

/**
 * print_sign - function to print the sign of a number
 * @n: input argument for the function
 * Return: 1 and prints '+' if n is greater than zero
 * and 0, and prints '0' if n iequals zero
 * and -1 and prints '-' if otherwise
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
	_putchar('\n');
}
