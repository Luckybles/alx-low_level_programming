#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: array input
 * @n: n element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + 1));

		if (i != (n - 1))
			printf(" ");
	}
	printf("\n");
}
