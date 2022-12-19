#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: integer
 * @b: integer
 * Return: notthing
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
