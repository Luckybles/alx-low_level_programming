#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: A program that print alphabets in lower case
 * Return:0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
