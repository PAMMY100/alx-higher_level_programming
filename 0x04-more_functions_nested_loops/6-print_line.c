#include "main.h"

/**
 * print_line - functions that print line
 * @n: function parameter
 * Return: always 0
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
