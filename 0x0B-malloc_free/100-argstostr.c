#include "main.h"
#include <stdio.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *arg;
	int current_position;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			total_length++;
			arg++;
		}
		total_length++;
	}

	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	current_position = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			concatenated[current_position] = *arg;
			current_position++;
			arg++;
		}
		concatenated[current_position] = '\n';
		current_position++;
	}
	return (concatenated);
}
