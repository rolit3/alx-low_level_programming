#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Write a program that adds positive numbers'
 * @argv: is an array of character pointers, which contains all the parameters
 * @argc: is the integer type of argument that contains a total number of
 * Return: 0 is True, 1 if Fasle
 */

int main(int argc, char *argv[])
{
	int i, j, adds = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		adds += atoi(argv[i]);
	}
	printf("%d\n", adds);
	return (0);
}
