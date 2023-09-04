#include "main.h"

/**
 * create_file - Create a new file with the given filename
 * and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file (can be NULL).
 *
 * Return: 1 on success, or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
