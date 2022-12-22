#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: input string
 * @src: input string
 * Return: pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return (dest);
	i}
}
