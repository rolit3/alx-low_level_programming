#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char mychar;

	while (i++ <= 9)
	{
	for (mychar = 'a'; mychar <= 'z'; mychar++)
		_putchar(mychar);
	_putchar('\n');
	}
}
