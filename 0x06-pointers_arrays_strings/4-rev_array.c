#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array
 * @n: number of element of an array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n++;
		j = a[i];
		a[i] = a[n];
		a[n] = j;

	}

}
