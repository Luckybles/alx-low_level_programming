#include <stdio.h>
/**
 * main - main entry
 * description:prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char digit;

	while (digit <= 9)
	{
		for (digit = 'a'; digit <= 'f'; digit++)
			putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
