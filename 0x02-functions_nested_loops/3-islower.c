#include "main.h"
/**
 * _islower -check for lowercase
 * Return: 1 if c is lower or return 0 if c is greater
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
