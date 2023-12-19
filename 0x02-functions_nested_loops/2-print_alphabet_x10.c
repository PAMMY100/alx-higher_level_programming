#include "main.h"

/**
 * main - fuction that prints alphabets 10x
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char x;

	while (i <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
