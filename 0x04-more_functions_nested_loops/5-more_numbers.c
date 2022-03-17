#include "main.h"
/**
  *more_numbers - print the numbers from 0 - 14 10 times
  *
  *Return: void
  */
void more_numbers(void)
{
	int i = 0, c;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar((c % 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}

}
