#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: function parameter of the name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
