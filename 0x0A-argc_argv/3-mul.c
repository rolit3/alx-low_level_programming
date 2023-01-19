#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that multiplies two numbers.
 * @argv: Array of character pointer that contains total number of argument
 * @argc: Total number of argument
 * Return: 0 if True or 1 if False wheter it received 2 arguments or not
 */
int main(int argc, char const *argv[])
{
int a, b;

if (argc == 3)
{
a = strtol(argv[1], NULL, 10); /* strtol allows converting */
b = strtol(argv[2], NULL, 10); /* argv[] into interger */
printf("%d\n", a *b);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
