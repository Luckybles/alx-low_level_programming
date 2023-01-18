#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: name to be printed
 * @f: the funtion pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

