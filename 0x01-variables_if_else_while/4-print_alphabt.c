#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	/**
	 * a to z : 97 - 122
	 */
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	return (0);
}
