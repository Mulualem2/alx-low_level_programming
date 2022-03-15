#include "main.h"
/**
  *main - entry point
  *
  *Description: from 00:00 to 23:59
  */
void jack_bauer(void)
{
	int i = 0;
	int w = 0, x = 0, y = 0, z = 0;

	while (i < 1440)
	{
		_putchar(w + '0');
		_putchar(x + '0');
		_putchar(':');
		_putchar(y + '0');
		_putchar(z + '0');
		_putchar('\n');

		if (z > 9)
		{
			z = 0;
			y++;
		}
		if (y > 5)
		{
			y = 0;
			x++;
		}
		if (x > 9)
		{
			x = 0;
			w++;
		}
		i++;
	}
}
