#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints string
 * @separator: separtor parameter
 * @n: parameter that contains the int
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *string;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		*string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
			printf("%s", string);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
