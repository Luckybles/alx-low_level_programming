#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: integer
 * @b: integer
 * Return: notthing
 */
void swap_int(int *a, int *b)
{
	int * p = a;
	int *t = b;

	p = &b;
	t = &a;
}
