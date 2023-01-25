#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate an array with some parameters
 * @array: the array to use
 * @size:  array size
 * @action: pointer to the function we need
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
