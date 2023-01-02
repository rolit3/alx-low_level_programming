#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @mychar: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int mychar)
{
	int last_digit = mychar % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
