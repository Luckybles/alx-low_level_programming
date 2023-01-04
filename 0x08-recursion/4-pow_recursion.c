#include "main.h"
/**
 * _pow_recursion - return the value of x raised to y
 * @x: the integer value to be raise
 * @y: the integer value to the rising
 * Return: return the value of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
