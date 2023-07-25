#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Entry point
 * @s: input string
 *
 * Description:
 * Reverses a string.
 *
 * Return: no return.
 */

void rev_string(char *s)
{
	int i
	int j;
	char tmp;
	int length;

	length = _strlen(s);
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
