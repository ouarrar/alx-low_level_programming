#include "main.h"
/**
 *leet - Entry point
 *@s: pointer to string.
 *
 *Description:
 *encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int count, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	count = 0;
	while (s[count] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[count])
			{
				s[count] = leetNums[leetCount];
			}
			leetCount++;
		}
		count++;
	}
	return (s);
}
