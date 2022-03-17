#include "main.h"

/**
  *print_triangle - draw triangle in terminal
  *@size: int type number
  *Return: void
  */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= 1)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
	else
	{
	_putchar('\n');
	}
}
