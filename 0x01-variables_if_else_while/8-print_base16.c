#include <stdio.h>

/**
 * main - this is to print numbers in base 16
 * Return: Always 0
 */

int main(void)
{
	int numb;
	char la;

	for (numb = 0; numb < 10; numb++)
		putchar ((numb % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar (la);

	putchar ('\n');
	return (0);
}
