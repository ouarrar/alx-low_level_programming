#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Calculates the largest prime factor of the number 612852475143
 *
 * Return: 0.
 *
 */

int main(void)
{
	long int num, prim_fac;

	num = 612852475143;

	for (prim_fac = 2; prim_fac <= num; prim_fac++)
	{
		if (num % prim_fac == 0)
		{
		/*Transforming num into its revised value, excluding the factor*/
			num /= prim_fac;
		/*reevaluate the value of prim_fac during the subsequent iteration*/
			prim_fac--;
		}
	}
	printf("%ld\n", prim_fac);
	return (0);
}
