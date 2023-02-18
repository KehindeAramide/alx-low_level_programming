#include <stdio.h>
/**
 * main - this is to print single digit number
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{

		if (n == 9)
			putchar (n + '0');
		else
		{	putchar (',');
			putchar (' ');
			putchar (n + '0');
		}
	}


	return (0);
}
