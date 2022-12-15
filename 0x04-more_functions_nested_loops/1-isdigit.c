#include "main.h"
/**
 * _isdigit - checks for a digit 
 * @c: integer from 0 through 9
 * Return: 1 if c is a figit, 0 otherwise
 */
int _isdigit(int c)
{
	int digit;
	for (digit = 0; digit <= 9; digit++)
	{
		if (c == digit)
		{
			return (1);
		}
		else
		{
			return(0);
		}
	}
}
