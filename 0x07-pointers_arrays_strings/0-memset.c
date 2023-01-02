#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @memory_area: memory area.
 * @constant_byte: constant byte.
 * @byte_filled: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *memory_area, char constant_byte, unsigned int byte_filled)
{
	unsigned int i;

	for (i = 0; i < byte_filled; i++)
		*(memory_area + i) =  constant_byte;

	return (memory_area);
}
