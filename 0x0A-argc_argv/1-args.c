#include <stdio.h>
#include "main.h"
/**
 * main - print the number of argument passed
 * @argc: the variable that counts the argument
 * @argv: the varible that display the content
 * Return:0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
