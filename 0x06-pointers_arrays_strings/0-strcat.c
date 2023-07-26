#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = _strlen(dest);
	lengthS = 0;

	while (*(src + lengthS) != '\0' && lengthD < 97)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	$(dest + lengthD) = "/0";
	return (dest);
}
