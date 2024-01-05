#include "main.h"

/**
 * *_strncpy - function that concat strings
 * @dest: parameter function
 * @src: parameter function
 * @n: parameter function
 * Return: string copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
