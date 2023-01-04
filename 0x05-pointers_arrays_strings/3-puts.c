#include "main.h"
/**
 * _strlen - return the length of a string
 * str - 
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *str)
{
int a = 0;

for (; *str++;)
a++;
return (a);
}
