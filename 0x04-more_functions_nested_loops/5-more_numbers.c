#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description:
 * Prints the numbers 0-14 ten times,
 * Using _putchar three times only
 * followed by a new line, 10 times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			/* print 2-digit number */
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
