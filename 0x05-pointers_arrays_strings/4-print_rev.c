#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Entry point
 * @s: input integer
 *
 * Description:
 * Prints a string in reverse order, followed by a new line.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int length;

	length=_strlen(s);
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
