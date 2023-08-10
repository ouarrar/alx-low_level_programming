#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status value 98.
 */
void *malloc_checked(unsigned int b) {
	void *ptr = malloc(b);
	if (ptr == NULL) {
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return ptr;
}
