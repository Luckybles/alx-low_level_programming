#include "main.h"
/**
 * _sqrt_recursion - return the square root of a number.
 * @n : the integer to find its square root
 * Return: square root of a number.
 */
int _sqrt_recursion(int n, int i)
{
	int suare = i * i;

	if (suare > n)
	{
		return (-1);
	}
	if (suare == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
