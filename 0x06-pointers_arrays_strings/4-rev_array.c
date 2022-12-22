#include "main.h"
/**
 * reverse_array - reverse the content of an array of integer
 * @a: pointer varible
 * @n: the number of integer
 * Return: reverse the integer
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
