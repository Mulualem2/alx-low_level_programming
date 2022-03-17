#include "main.h"
/**
  *print_line - drows straight line in terminal
  *@n: int type number
  *Return: void
  */

void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
