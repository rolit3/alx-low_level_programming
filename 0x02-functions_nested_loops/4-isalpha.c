#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercas
 * Returns 0 otherwise
 * @mychar: The character to be checked.
 * Return: 1 or 0
 */
int _isalpha(int mychar)
{
	if ((mychar >= 'a' && mychar <= 'z') ||
	    (mychar >= 'A' && mychar <= 'Z'))
		return (1);
	else
		return (0);
}
