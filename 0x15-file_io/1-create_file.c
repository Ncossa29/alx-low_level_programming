#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file name
 * @text_content: A pointer to a string to be written no the file.
 * Return: If the function fails -1.
 */

int create_file(const char *filename, char *text_content)
{
	int gg, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	gg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(gg, text_content, len);

	if (gg == -1 || w == -1)
		return (-1);

	close(gg);

	return (1);
}
