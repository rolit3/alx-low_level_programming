#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry
 * Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= 90; ++j)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
