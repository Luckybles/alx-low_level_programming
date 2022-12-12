#include <stdio.h>
/**
 * main - main entry
 * description:prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char digit;
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
