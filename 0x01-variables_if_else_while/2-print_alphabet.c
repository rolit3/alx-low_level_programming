#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry
* This program prinnt all alphabet letters in lower cases
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
