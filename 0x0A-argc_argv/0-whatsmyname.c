#include <stdio.h>
#include "main.h"

/**
 * main - print its name followed by a new line
 * @argc: the number to count by command line
 * @argv: arry that contain the program line to be counted
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
