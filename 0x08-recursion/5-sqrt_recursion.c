#include "main.h"

/**
 * checkSquare - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int checkSquare(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (checkSquare(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checkSquare(1, n));
}
