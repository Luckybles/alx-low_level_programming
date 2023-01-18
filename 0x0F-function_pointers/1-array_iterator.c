#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - execute a funvtion as a parameter
 * @array:array inputs
 * @size: array size
 * @action: pointer to the function
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
