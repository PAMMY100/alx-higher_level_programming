#include "main.h"

/**
 * print_rev - function that prints strings in rev
 * @s: function parameter
 * Return: reverse strings
 */

void print_rev(char *s)
{
	int x;
	int j = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		j++;
	}
	for (x = j - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
