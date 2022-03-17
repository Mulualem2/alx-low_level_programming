#include "main.h"
/**
  *more_numbers - print the numbers from 0 - 14 10 times
  *
  *Return: void
  */
void more_numbers(void)
{
	int i, c;

	i = 0;

	while (i < 10)
	{
		c = 0;

		while (c < 15)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			else
			{
				_putchar(c % 10 + '0');
			}
			c++;
		}
		i++;
		_putchar('\n');
	}
}
