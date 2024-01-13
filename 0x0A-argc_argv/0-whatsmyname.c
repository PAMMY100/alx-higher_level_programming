#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: function parameter that serve as index
 * @argv: function parameter that serve as array
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
