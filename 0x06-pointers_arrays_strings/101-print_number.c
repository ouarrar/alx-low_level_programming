#include "main.h"
/**
 *print_number - Entry point
 *@n: integer to be printed.
 *
 *Description:
 *prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *
 *Return: void.
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
