#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The converted unsigned integer, or 0 if b is NULL or contains
 *         characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	/* Store the final result */
	unsigned int result = 0;

	/* Represents the base (power of 2) */
	unsigned int base = 1;

	/* Store the length of the binary string */
	int length = 0;

	if (b == NULL)
		return (0); /* Return 0 if the input string is NULL */

	/* Calculate the length of the binary string */
	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0); /* Return 0 if there's a non-binary character */
	}

	/* Convert the binary string to an unsigned integer */
	for (base = 1, result = 0, length--; length >= 0; length--, base *= 2)
	{
		if (b[length] == '1')
			result += base; /* Add the appropriate power of 2 to the result */
	}

	return (result);
}
