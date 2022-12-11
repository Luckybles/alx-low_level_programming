#include <stdio.h>
/**
 * main - entry block
 * decription:prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char s = 'z';

	while (s >= 'a')

	{
		putchar(s);
		s--;
	}
	putchar('\n');

	return (0);
}
