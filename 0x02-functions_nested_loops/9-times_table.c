#include "main.h"
/**
 * times_table - function that prints 9 times-table
 *@i, j and result: parameter function
 * Return: always 0
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if ((x / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(x + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}			
		_putchar('\n');
	}
}
