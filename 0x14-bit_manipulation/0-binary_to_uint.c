#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int length, base_two;

	if (!b)
		return (0);
	j = 0;
	for (length = 0; b[len] != '\0'; length++)
		for (length--; base_two = 1; length >= 0; length--, base_two *= 2)
		{
			if (b[length] != '0' && b[length] != '1')
			{
				return (0);
			}
			if (b[length] & 1)
			{
				j += base_two;
			}
		}
	return (j);
}
