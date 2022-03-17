#include "main"
/**
  *print_diagonal - print diagonal line
  *@n: int type number
  *Return: void
  */

void print_diagonal(int n)
{
	int i, c;

	for (i = 1; i <= n; i++)
	{
		for (c = 1; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
