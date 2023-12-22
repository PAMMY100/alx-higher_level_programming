#include "main.h"

/**
 * print_square - function that prints the size of square
 * @size: function parameter
 * Return: size
 */

void print_square(int size)
{
	int x, j;

	for (x = 0; x < size; x++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
