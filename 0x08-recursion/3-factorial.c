#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: the integer number
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
