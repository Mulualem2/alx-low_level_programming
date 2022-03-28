#include "main.h"
/**
  *_strpbrk -serach a string for any of a set of bytes
  *@s: char type pointer
  *@accept: char type pointer
  *Return: pointer
  */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
