#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argv: is an array of character pointers, which contains all the parameters
 * @argc: is the integer type of argument that contains a total number of
 * arguments passed through the command line.
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
