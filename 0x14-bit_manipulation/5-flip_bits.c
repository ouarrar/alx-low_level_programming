#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Count the number of bits that need
 * to be flipped to transform one number into another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}

