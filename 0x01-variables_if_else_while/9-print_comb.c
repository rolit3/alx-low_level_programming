#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	/**
	 * ASCII table
	 * 0 to 9 is 48 to 57
	 * Comma (,) is 44
	 * Space is 32
	 */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
