#include "main.h"
#include "stdio.h"
/**
 * swap_int - function to swap two integers
 * @a: the first integer
 * @b: the secon integer
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
