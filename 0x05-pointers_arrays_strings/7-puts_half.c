#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Entry point
 * @str: input string
 *
 * Description:
 * Prints half a string.
 *
 * Return: no return.
 */

void puts_half(char *str)
{
	int i = 0;
	int length = 0;
	int mid;

	length = _strlen(*s);

	if ((length % 2) == 0)
		mid = length / 2;
	else
		mid = (length + 1) / 2;

	for (i = mid; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
