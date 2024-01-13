#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints number of arguments
 * @argc: parameter that counts the command
 * @argv: parameter that serves as array
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
