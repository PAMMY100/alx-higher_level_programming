#include "main.h"
/**
 * *_strstr - function that find the first occurrence
 * @haystack: function parameter
 * @needle: function parameter
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *n = needle;

	while (*n != '\0' && *x == *n)
	{
		x++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
