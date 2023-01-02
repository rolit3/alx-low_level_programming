#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Write a program that prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 * Return: Alwways 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
