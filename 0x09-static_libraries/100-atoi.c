#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: function parameter
 * Return: an int
 */

int _atoi(char *s)

{

	int a = 0;
	unsigned int ni = 0;
	int mem = 1;
	int isi = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	mem *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[a] - '0');
	a++;
	}
	if (isi == 1)
	{
	break;
	}
	a++;
	}
	ni *= mem;
	return (ni);
}
