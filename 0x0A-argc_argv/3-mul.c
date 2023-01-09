#include <stdio.h>
#include "main.h"
/**
 * main - multiply two numbers
 * @argc: the argument count
 * @argv: the argument counted variable
 * Return:0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
