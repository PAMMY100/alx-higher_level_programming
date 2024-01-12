#include "main.h"

/**
 * *_strcat - function that concat two strings
 * @dest: function parameter
 * @src: function parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destcount = 0;
	int srccount = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destcount++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srccount++;
	}
	for (i = 0; i <= srccount; i++)
	{
		dest[destcount + i] = src[i];
	}
	return (dest);
}
