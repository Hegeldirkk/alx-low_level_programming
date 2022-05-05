#include "main.h"

/**
 * append_text_to_file - appends text.
 * @filename: pointer nzme file.
 * @text_content: pointer content to append.
 * Return: 1, -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, i = 0, j;

	if (filename == NULL)
		return (-1);
	fo = open(filename, O_WRONLY | O_APPEND);
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
