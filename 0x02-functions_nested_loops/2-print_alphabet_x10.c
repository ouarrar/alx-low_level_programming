#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
}
