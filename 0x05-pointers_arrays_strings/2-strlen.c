#include "main.h"
/**
 * _strlen - return length of string
 * @s: sting
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length =length + 1;
		*s = *s + 1;
	}
	return (length);
}
