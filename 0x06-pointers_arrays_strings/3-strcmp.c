#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first sting to compare
 * @s2: second string to compare
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	if (s1[i] == s2[j])
		return (0);
	else
		return (s1[i] - s2[j]);
}
