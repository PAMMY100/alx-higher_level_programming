#include "main.h"

/**
 * more_numbers - function that prints numbers fourteen times
 * Return: always 0
 */

void more_numbers(void)
{
	int x, j;

	for (x = 0; x < 10; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
