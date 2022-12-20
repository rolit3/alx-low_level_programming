#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry
 *  Print the last number stored in n variable
 *  Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
