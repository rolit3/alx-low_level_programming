#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: the caracter to check
 * Return: 1 if the functon is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
