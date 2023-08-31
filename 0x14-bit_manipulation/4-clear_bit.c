#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Clear a bit at a given index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-based).
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (i = 1; h > 0; i *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
