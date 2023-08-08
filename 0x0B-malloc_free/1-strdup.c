#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t len;
	char *duplicate;

	len = 0;
	duplicate = (char *)malloc(len + 1);

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (duplicate != NULL)
	{
		size_t i;

		for (i = 0; i <= len; i++)
		{
			duplicate[i] = str[i];
		}
	}

	return (duplicate);
}
