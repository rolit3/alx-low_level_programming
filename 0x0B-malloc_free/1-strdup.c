#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @string: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *string)
{
	char *strout;
	unsigned int i, j;

	if (string == NULL)
		return (NULL);

	for (i = 0; string[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = string[j];

	return (strout);
}
