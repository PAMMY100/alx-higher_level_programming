#include "main.h"

/**
 * *malloc_checked - pointer that allocates memory using malloc
 * @b: function parameter
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
