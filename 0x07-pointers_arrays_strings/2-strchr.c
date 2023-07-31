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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
