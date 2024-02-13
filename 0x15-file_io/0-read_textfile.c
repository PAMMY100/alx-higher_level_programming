#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * @filename: file pointer
 * @letters: size of letters
 * Return: file contents
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fl;
	ssize_t total_letters = 0;
	int ch;

	if (filename == NULL)
		return (0);

	fl = fopen(filename, "r");

	if (fl == NULL)
		return (0);

	while ((ch = fgetc(fl)) != EOF && letters > 0)
	{
		if (putchar(ch) == EOF)
		{
			fclose(fl);
			return (0);
		}
		total_letters++;
		letters--;
	}
	fclose(fl);
	return (total_letters);
}
