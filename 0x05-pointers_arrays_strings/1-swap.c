#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: function parameters
 * @b: function parameters
 *
 * Return: swap
 */

void swap_int(int *a, int *b)
{
	int new_var = *a;
	*a = *b;
	*b = new_var;
}
