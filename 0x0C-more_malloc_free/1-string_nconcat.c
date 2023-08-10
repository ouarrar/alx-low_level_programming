#include "main.h"
#include "strlen.c"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int result_len;
	unsigned int i;
	unsigned int j;

	len1 = 0;
	len2 = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result_len = len1 + n;

	result = malloc((result_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		result[i] = s2[j];
	}

	result[result_len] = '\0';

	return (result);
}