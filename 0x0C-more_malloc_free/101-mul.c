#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "isdigit.c"

int is_positive_number(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	unsigned long long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);

	result = num1 * num2;

	printf("%llu\n", result);

	return (0);
}
