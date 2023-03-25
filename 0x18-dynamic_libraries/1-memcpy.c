#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: the destination of the new string
 * @src: the source input
 * @n: the integer value
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
