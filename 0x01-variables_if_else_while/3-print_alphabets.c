#include <stdio.h>
/**
 * main - main block
 * Description: prints tthe alphabets in lower
 * and then in upper case followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}

	r = 'A';

	while (r <= Z)
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
