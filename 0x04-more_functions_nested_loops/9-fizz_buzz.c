#include <stdio.h>

/**
 * main - function that prints fizz buzz
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s", "FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("%s", "Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d", x);
			printf(" ");
		}
	}
	return (0);
}
