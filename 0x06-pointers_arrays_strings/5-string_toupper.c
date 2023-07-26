#include "main.h"
/**
 *string_toupper - Entry point
 *@x: pointer to string.
 *
 *Description:
 *changes all lowercase letters of a string to uppercase.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int counter;

	counter = 0;

	while (*(x + counter) != '\0')
	{
		if (*(x + counter) >= 97 && *(x + counter) <= 122)
		{
			*(x + counter) = *(x + counter) - 32;
		}
		counter++;
	}
	return (x);
}
