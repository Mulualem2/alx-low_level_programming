#include "main.h"

/**
  *print_number - print an intiger
  *@n: integer number
  *Return: void
  */

void print_number(int n)
{
	long x;
	long y;
	int z;

	x = n;

	if (x < 0)
	{
		x *= -1;
		_putchar('-');
	}

	y = 1;
	z = 1;
	while (z)
	{
		if (x / (y * 10) > 0)
			y *= 10;
		else
			z = 0;
	}

	while (x >= 0)
	{
		if (y == 1)
		{
			_putchar(x % 10 + '0');
			x = -1;
		}
		else
		{
			_putchar((x / y % 10) + '0');
			y /= 10;
		}
	}
}
