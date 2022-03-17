#include <stdio.h>
#include <math.h>
/**
  *main - entry point
  *
  *Return: 0
  */

int main(void)
{
	int i;
	long x = 612852475143;

	for (i = (int) sqrt(x); i > 2; i++)
	{
		if (x % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
