#include "main.h"
/**
 * _strlen - return length of string
 * @s: sting
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
