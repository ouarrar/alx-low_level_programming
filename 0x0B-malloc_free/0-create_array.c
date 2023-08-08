#include "main.h"

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
	char *array = (char *)malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
