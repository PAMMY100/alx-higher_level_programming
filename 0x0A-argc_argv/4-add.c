#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that print result
 * @argc: parameter of command count
 * @argv: array of parameter
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
