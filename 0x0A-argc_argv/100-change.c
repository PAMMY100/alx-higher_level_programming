#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints change of coin
 * @argc: parameter that count index
 * @argv: parameter that saves argc as array
 * Return: addition of change
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int qtr = 0, dimes = 0, nickels = 0, twos = 0, ones = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			qtr++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			dimes++;
		}
		else if (cent >= 5)
		{	
			cent -= 5;
			nickels++;
		}
		else if (cents >= 2)
		{
			cent -= 2;
			twos++;
		}
		else
		{
			cent -= 1;
			ones++;
		}
	}
	printf("%d\n", qtr + dimes + nickels + twos + ones);

	return (0);
}
