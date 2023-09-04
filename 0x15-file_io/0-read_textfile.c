#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read and write the content of a file to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of bytes to read and write.
 *
 * Return: the number of bytes written to stdout, or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(o);

	return (w);
}
