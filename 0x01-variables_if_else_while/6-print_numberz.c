#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry
* Write a program that prints all single digit numbers of base 10 starting
* from 0, followed by a new line.
* You are not allowed to use any variable of type char
* You can only use the putchar function
* (every other function (printf, puts, etc…) is forbidden)
* You can only use putchar twice in your code
* All your code should be in the main function
* Return: Always 0
*/
int main(void)
{
	int i = 48;

	/**
	 * ASCII table for 0 to 9 is 48 to 57
	 */
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
}
