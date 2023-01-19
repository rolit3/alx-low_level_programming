
#include "main.h"
/**
 * _memcpy - Write a function that copies memory area.
 * @destination: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to destination.
 */
char *_memcpy(char *destination, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(destination + i) =  *(src + i);

	return (destination);
}
