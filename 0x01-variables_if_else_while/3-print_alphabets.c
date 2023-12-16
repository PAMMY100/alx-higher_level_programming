#include <stdio.h>

/**
 * main - main function that print a-z
 *
 * Return: always 0
 */

int main(void)
{
	char letter;
	char alpha;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
