#include <stdio.h>
/**
  *main - where compilation starts
  *
  *Return: Always 0 (succes)
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 100; i++)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
