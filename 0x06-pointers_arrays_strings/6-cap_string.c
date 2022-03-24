#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: char type pointer
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, x;
	int c = 32;
	int sep[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - c;
		}

		c = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == sep[x])
			{
				x = 12;
				c = 32;
			}
		}
	}
	return (n);
}
