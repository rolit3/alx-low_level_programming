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
	int n, luhn_algo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	luhn_algo = n % 10;
	printf("Last digit of %d is %d ", n, luhn_algo);
	if (luhn_algo > 5)
	{
		printf("and is greater than 5");
	}
	if (luhn_algo == 0)
	{
		printf("and is 0");
	}
	if (luhn_algo < 0 && luhn_algo != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("%d\n", n);
	return (0);
}
