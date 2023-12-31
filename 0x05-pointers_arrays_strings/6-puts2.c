#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Entry point
 * @s: input string
 *
 * Description:
 * Prints one char out of two of a string.
 *
 * Return: no return.
 */

void puts2(char *s)
{
	int index = 0;
	int length = 0;

	length = _strlen(s);

	for (index = 0; index < length; index += 2)
		_putchar(s[index]);

	_putchar('\n');
}
