#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
