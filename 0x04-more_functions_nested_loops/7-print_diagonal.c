#include "main.h"

/**
 * print_diagonal - function that prints character
 * @n: function parameter
 * Return: always 0
 */

void print_diagonal(int n)
{
	int x, j;

	for (x = 0; x < n; x++)
	{
		for (j = 0; j <= x; j++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
