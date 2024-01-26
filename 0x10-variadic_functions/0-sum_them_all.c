#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sum values
 * @n: parameter that takes list of integer
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, count = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		count += va_arg(args, int);
	}

	va_end(args);
	return (count);
}
