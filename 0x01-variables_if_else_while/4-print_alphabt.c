#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line and without e and q.
 * Return: Always 0
 */
int main(void)
{
	/**
	 * a to z : 97 - 122
	 * e is 101
	 * q is 113
	 */
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 || i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
