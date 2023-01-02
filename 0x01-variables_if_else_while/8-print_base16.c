#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Retrun: Always 0
 */
int main(void)
{
	int i = 48;
	int j = 97;

	/**
	 * ASCII table for 0 to 9 is 48 to 57
	 * ASCII a to f is 97 to 102
	 */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
