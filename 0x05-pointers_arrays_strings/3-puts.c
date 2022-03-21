#include "main.h"
/**
  *_puts - print string to std out
  *@str: char type pointer
  *Return: void
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
