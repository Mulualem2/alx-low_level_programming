#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string pointer
 * Return: string s
 */

char *rot13(char *s)
{
	int i;
	char st1[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char st2[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				st2[s[i] - 97] : st1[s[i] - 65];
		}
	}
	return (s);
}
