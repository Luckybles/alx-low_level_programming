#include "main.h"
/**
 * _sqrt_recursion - return the square root of a number.
 * @n : the integer to find its square root
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	int i = j * j;

	if (n < 0)
	{
		return (-1);
	}
	if (i == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
