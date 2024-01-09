#include "main.h"

/**
 * _strspn - function that count lenght
 * @s: function parameter
 * @accept: function parameter
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
