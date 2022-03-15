#include "main.h"
/**
  *print_alphabet_x10 - printalphbaet in lower case 10 x
  *
  *Return: 0 (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
