#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to newly created name file
 * @text_content: A pointer to the content of said file
 * Return: -1 when it false
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(fd, text_content, len);

	if (fd == -1 || t == -1)
		return (-1);

	close(fd);

	return (1);
}
