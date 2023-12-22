#include "main.h"

/**
 * print_diagonal - function that prints character
 * @n: function parameter
 * Return: always 0
 */

void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (j = 0; j <= x; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
