#include "main.h"

/**
 * *_strchr - function that locate string
 * @s: function parameter
 * @c: function parameter
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
		return (NULL);
}
