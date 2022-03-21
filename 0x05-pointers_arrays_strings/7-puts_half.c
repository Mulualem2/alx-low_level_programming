#include "main.h"
/**
  *puts_half - print the half of givin string
  *@str: char type pointer
  *Return: void
  */

void puts_half(char *str)
{
	int i, len, m;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++
	}
	m = (len / 2);

	if ((len % 2) = 1)
		m = ((len + 1) / 2);

	for (i = m; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
