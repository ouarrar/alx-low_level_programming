#include "main.h"
#include "2-strlen_recursion.c"
/**
 * checker_pal - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int checker_pal(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (checker_pal(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (checker_paly(s, 0, _strlen_recursion(s) - 1));
}
