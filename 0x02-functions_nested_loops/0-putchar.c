#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = -1; i < 8; i++)
	{
	_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}