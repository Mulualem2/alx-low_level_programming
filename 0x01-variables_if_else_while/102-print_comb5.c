#include <stdio.h>
/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i, j;
	int w, x, y, z;

	for (i = 0; i < 100; i++)
	{
		w = i / 10;
		x = i % 10;
		for (j = 0; j < 100; j++)
		{
			y = j / 10;
			z = j % 10;

			if (w < y || (w == y && x < z))
			{
				putchar(w + '0');
				putchar(x + '0');
				putchar(' ');
				putchar(y + '0');
				putchar(z + '0');

				if (!(w == 9 && x == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
