#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies
 * @argc: function parameter
 * @argv: function parameter
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int x = atoi(argv[2]);
		int mul = i * x;

		printf("%d\n", mul);
	}
	return (0);
}
