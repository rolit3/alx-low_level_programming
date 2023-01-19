#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @mychar: the caracter to check
 * Return: 1 if the functon is lowercase, otherwise 0.
*/

int _islower(int mychar)
{
	if (mychar >= 'a' && mychar <= 'z')
		return (1);
	else
		return (0);

}
