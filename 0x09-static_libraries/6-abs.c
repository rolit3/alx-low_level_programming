#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @mychar: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int mychar)
{
	if (mychar >= 0)
		return (mychar);
	else
		return (-mychar);
}
