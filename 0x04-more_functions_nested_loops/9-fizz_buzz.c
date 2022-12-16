#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * DEscription: print the number from 1 to 100
 * Fizz for multiples of 3
 * Buzz for the multiple of 5
 * FizzBuzz for multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int numb;

	for (numb = 1; numb <= 100; numb++)
	{
		if (numb % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (numb % 3 == 0)
		{
			printf("Fizz");
		}
		else if (numb % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", numb);
		}
		if (numb < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}


