#include "main.h"
/**
  *print_times_table - print n times table
  *@n: int type number
  *Description: if n is greater than 15 or lessthan 0 nothing to print
  */
void print_times_table(int n)
{
	int i = 0, j, k;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k > 99)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			}
			else if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
