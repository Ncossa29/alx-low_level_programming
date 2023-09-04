#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t d, k, w;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	k = read(d, ptr, letters);
	w = write(STDOUT_FILENO, ptr, k);

	free(ptr);
	close(d);
	return (w);
}
