#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argv: is an array of character pointers, which contains all the parameters
 * @argc: is the integer type of argument that contains a total number of
 * arguments passed through the command line.
 * Return: Akways (0)
 */
int main(int argc, char *argv[])
{
	(void) argv;	/* This allow us to ignore argv for compilatorpurpose*/
	printf("%d\n", argc - 1);
	return (0);
}
