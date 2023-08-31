#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing binary digits.
 *
 * Return: The converted number, or 0 if there are invalid 
 * characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;
	int power = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0); /*Invalid character found*/
		}

		result = (result << 1) | (*b - '0'); /*Shift left and add the binary digit*/
		b++;
		power++;
	}

	return (result);
}
