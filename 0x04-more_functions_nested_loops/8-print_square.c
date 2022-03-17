#include "main.h"
/**
  *print_square - drawing square
  *@size: int type number
  *Return: void
  */
void print_square(int size)
{
	int i, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for(c = 2; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
