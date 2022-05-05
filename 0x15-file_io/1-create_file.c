#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer name.
 * @text_content: pointer text content.
 * Return: 1 for success, -1 or NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int fo, j, i = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fo < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		j = write(fo, text_content, i);
		if (i != j)
			return (-1);
	}
	close(fo);
	return (1);
}
