#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: integer
 * @index: index of bit
 *
 * Return: -1 if error or 1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	z = 1;
	*n = *n | (z << index);

	return (1);
}
