#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	/* Store a copy of n */
	unsigned long int num = n;

	/* Store the number of bit shifts */
	int bit_shifts = 0;

	/* Check if n is 0 */
	if (num == 0)
	{
		printf("0"); /* Print "0" and return */
		return;
	}

	/* Calculate the number of bit shifts needed */
	for (; (num >>= 1) > 0; bit_shifts++)
		;

	/* Print the binary representation */
	for (; bit_shifts >= 0; bit_shifts--)
	{
		if ((n >> bit_shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
