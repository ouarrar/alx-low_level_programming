#include "main.h"
#include "memset.c"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory (initialized to zero),
 * or NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, total_size);

	return (ptr);
}