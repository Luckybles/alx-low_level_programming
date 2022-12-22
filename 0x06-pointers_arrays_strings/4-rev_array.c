#include "main.h"
/**
 * reverse_array - reverse the content of an array of integer
 * @a: pointer varible
 * @n: the number of integer
 * Return: reverse the integer
 */
void reverse_array(int *a, int n)
{
	int j,i,temp;

	for (i = 0, j = (n - 1); i < j; i++, j++)
	{
		temp = n[i];
		n[i] = n[j];
		n[j] = temp;
	}
	for (i = 0; i < (n - 1); i++)
		return (n[i]);
}

