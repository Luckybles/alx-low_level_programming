#include "main.h"
/**
 * print_array - print n element of an array
 * @a: integer
 * @n: integer
 * Return: element of array
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
	printf('\n');
}

