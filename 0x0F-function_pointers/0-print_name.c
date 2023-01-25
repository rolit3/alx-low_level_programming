#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print to stdio the content of the char *name
 * @name: is the name
 * @f: the function pointer that will print the name
 * Return: Nothing is our case
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

