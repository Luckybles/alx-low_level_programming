#include "main.h"
/**
 * _strlen - return length of string
 * @s: sting
 * Return: length of string
 */
int _strlen(char *s)
{
	char length;

	for (length = 0; *s[length] != '\0'; length++)
		return (length);
}
