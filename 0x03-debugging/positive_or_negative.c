#include "main.h"
/**
 * positive_or_negative - this function checks for negative of positve number
 *
 * @i: the number to test
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative ", i);
	else
		printf("%d is positive ", i);
}
