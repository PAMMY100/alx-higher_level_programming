#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints arguments it received
 * @argc: parameter index for argv
 * @argv: arrays that stores arguments
 * Return: always 0
 */

int main(int argc,char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
