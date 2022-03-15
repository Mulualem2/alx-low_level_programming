#include "main.h"
/**
  *print_alphabet - prints alphabet in lower case
  *
  *Description: print alphabets
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
