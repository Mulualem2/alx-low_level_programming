#include "main.h"
/**
  *more_numbers - print the numbers from 0 - 14 10 times
  *
  *Return: void
  */
void more_numbers(void)
{
	int i, c;

	c = 0;

	while (c < 10)
	{
		i = 0;

		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
