#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads text file and prints.
 * @filename: pointer file in char type.
 * @letters: size_t type.
 * Return: actual number, or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	char *buffer;
	int i, y;

	if (filename == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	i = read(fo, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(fo);
	y = write(STDOUT_FILENO, buffer, i);
	if (y < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (y);
}
