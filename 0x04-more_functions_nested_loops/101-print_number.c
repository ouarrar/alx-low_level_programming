#include "main.h"

/**
 * print_number - Entry point
 * @n: Integer to print.
 *
 * Description:
 * Prints an integer using only '_putchar'.
 *
 * Return: void.
 *
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) != 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
