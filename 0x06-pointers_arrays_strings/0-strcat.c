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
	//lengthS=_strlen(src);
	for(i = 0;i < lengthS;i++)
	{
		*(dest+lengthD+i) = *(src+i);
	}
	$(dest+lengthD) = "/0";
	
	return (dest)
}
