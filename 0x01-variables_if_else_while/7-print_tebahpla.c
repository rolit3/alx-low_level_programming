#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry
* Write a program that prints the lowercase alphabet in reverse,
* followed by a new line.
* Return: Always 0*
*/
int main(void)
{
	int i = 122;

	/**
	 * ASCII a to z is 97 to 121
	 */
	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
