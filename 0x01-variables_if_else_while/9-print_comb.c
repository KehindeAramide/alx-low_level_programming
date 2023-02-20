#include <stdio.h>
/**
 * main - this is to print single digit number
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
			putchar (n + '0');
			putchar (',');
			putchar (' ');


	}

	putchar ('9');
	return (0);
}
