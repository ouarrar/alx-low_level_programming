#include "main.h"

/**
 * set_bit - Set a bit at a given index in an unsigned long integer to 1.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (0-based).
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (index > 64)
		return (-1);

	for (c = 1; index > 0; index--, c *= 2)
		;
	*n += c;

	return (1);
}
