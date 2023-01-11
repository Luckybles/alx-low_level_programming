#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of char
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}


	arr = (char *)malloc(size * sizeof(c));

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}
		return (arr);
	}
}
