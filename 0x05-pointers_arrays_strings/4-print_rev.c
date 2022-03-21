#include "main.h"
/**
  *print_rev - reverse a string
  *@s: char typr pointer
  *Return: void
  */

void print_rev(char *s)
{
	int x, y;
	int len = 0;

	for (x =0; s[x] != '\0'; x++)
	{
		len++;
	}

	for (y = (len - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
