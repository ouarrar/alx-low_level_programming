#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description:
 * print the numbers, from 0 to 9, followed by a new line
 * using only `_putchar`.
 *
 * Return: void.
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
