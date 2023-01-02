#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count++ <= 9)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}