#include "main.h"
/**
 *reverse_array - Entry point.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Description:
 *reverses the content of an array of integers.
 *Return: no return.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = *(a + counter);
		*(a + counter++) = *(a + n);
		*(a + n--) = temp;
	}
}
