#include "main.h"
/**
  *rev_string - revrese a string
  *@s: char type pointer
  *Return: void
  */

void rev_string(char *s)
{
	char rev;
	int i;
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
