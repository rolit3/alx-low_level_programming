#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints its name, followed by a new line.
 * @argv: Array of character pointer that contains total number of argument
 * @argc: Total number of argument
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
