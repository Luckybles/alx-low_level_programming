#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive number
 * @argc:input
 * @argv:input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 1; argv[i][j]; j++)
		{
			if (argv[i][j] == NULL)
			{
				printf(0);
				printf("\n");
			}
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + arg[j];
			printf("%d", sum);
		}
	}
	return (0);
}
