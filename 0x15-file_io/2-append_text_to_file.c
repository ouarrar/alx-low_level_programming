#include "main.h"


/**
 * append_text_to_file - Append text content to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append to the file (can be NULL).
 *
 * Return: 1 on success, or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
