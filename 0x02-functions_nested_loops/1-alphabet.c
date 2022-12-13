#include "main.h"
/** 
 * main - entry point
 * Description: function that prints the alphabet, in lowercase
 * Return: 0 (success)
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

	return (0);
}
