#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: function parameter
 * @s2: function parameter
 * Return: string comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
