#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string pointer
 * Return: string s
 */

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_it[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == alphabet[j])
				s[i] = rot_it[j], j = 52;
	return (s);
}
