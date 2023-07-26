#include "main.h"
/**
 * _strncat - Entry point
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: n bytes from @src to be concatenated
 * Description:
 * Function that concatenates two strings.
 * Except that it will use at most n bytes from @src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD))
		lengthD++;
	while ((*(dest + lengthD) = *(src + lengthS)) && lengthS < n)
	{
		lengthD++;
		lengthS++;
	}
	return (dest);
}
