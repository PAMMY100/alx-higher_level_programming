#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: function parameter
 * Return: strlen
 */
int _strlen(char *s)
{
	int x;
	int len = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		len++;
	}
	return (len);
}
