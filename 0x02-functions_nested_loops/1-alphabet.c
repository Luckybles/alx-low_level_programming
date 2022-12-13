#include "main.h"
/**
 * main - entry point
 * description: prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
