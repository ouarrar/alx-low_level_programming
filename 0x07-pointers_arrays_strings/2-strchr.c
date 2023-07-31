#include "main.h"
#include <stdio.h>
/**
 * _strchr - Entry point
 * @s: string
 * @c: character
 * Return: first occurrence of @c in @s,or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
			i++;
	}
	return (NULL);
}
