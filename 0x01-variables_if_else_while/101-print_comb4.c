#include <stdio.h>
/**
  *main - where compilation starts
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;
	int j;
	int k;
	int x;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		x =  i % 10;

		if (j < k && k < x)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(x + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
