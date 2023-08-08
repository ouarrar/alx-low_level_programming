#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @c: The character to initialize the array with.
 * @size: The size of the array.
 *
 * Return: A pointer to the created array, or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array;
	unsigned int i;

	array = (char *)malloc(size * sizeof(char));
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
