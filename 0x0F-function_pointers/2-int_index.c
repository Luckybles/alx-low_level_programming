#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search interger
 * @array: array input
 * @size:the size of the array
 * @cmp: the pointer fo the function
 * Return:0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (1);
	}
	return (-1);
}
