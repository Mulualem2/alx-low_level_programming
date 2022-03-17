#include "main.h"

/**
  *print_number - print an intiger
  *@n: integer number
  *Return: void
  */

void print_number(int n)
{
	long a;
	int b;
	long c;

	c = n;
	
	if (c < 0)
	{
		c *= -1;
		_putchar('-');
	}

	
	a = 1;
	b = 1;
	while (a)
	{
		if (c / (a * 10) > 0)
			a *= 10;
		else
			b = 0;
	}

	while (c >= 0)
	{
		if (a == 1)
		{
			_putchar(c % 10 + '0');
			c = -1;
		}
		else
		{
			_putchar((c / a % 10) + '0');
			a /= 10;
		}
	}
}
