#include "main.h"
/**
  *print_square - drawing square
  *@size: int type number
  *Return: void
  */

void print_square(int size)
{
	int c, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (i = 2; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
