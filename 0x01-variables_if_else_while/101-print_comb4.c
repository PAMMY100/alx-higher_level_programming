#include <stdio.h>

/**
 * main - function that prints 3 digit
 *
 * Return: always 0
 */

int main(void)
{
	int i, p, j;

	for (i = '0'; i < '9'; i++)
	{
	for (p = i + 1; p < '9'; p++)
	{
	for (j = p + 1; j < '9'; j++)
	{
	if ((i != p) != j)
	{
	putchar(i);
	putchar(p);
	putchar(j);
	if (i == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
