#include "main.h"

/**
 * _pow_recursion - function that returns raised to power
 * @x: function parameter
 * @y: function parameter
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
