#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 * @mychar: the character to print
 * Return: 1 if the character is greater than zero,
 * 0 if its equal to zero an -1 if its less
 */
int print_sign(int mychar)
{
	if (mychar > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (mychar == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
