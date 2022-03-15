#include "main.h"
/**
  *times_table - entry point
  *
  *Description; 9 times table
  */
void times_table(void)
{
	int i =0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			k = i * j;

			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
