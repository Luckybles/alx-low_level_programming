#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: character c
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'C')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
