#include <stdio.h>
/**
 * main - main entry
 * description:prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit);
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
