#include "main.h"
/**
 * _abs - function to print absolute number
 *
 * @c: parameter to be checked
 *
 * Return: Always c
 */

int _abs(int c)

{

	if (c < 0)
		c = (-c);
	else if (c >= 0)
		c = c;
	return (c);
}
