#include <stdio.h>
/**
  *main - entry point
  *
  *Return: o (success)
  */
int main(void)
{
	int sum = 0;
	int x = 1;
	int y = 2;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
		{
			sum += y;

			z = y;
			y += x;
			x = z;
		}
	}
	printf("%d\n", sum);
	return (0);
}
