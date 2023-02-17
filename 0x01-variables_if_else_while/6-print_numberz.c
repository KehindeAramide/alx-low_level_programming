#include <stdio.h>

/**
 * main - this is t print numbers from 0 to 9
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');

	return (0);
}
