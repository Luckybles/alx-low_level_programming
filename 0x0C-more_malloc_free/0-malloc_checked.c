#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - funtion to alloccate memory using
 * @b:number of of byte to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		return (98);
	}
	return (p);
}
