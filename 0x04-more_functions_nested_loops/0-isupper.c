#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: character c
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char uppercase;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (uppercase == 'C')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
