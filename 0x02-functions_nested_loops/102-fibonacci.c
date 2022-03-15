#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0 (success)
  */
int main(void)
{
	long int count = 2;
	long int x = 1;
	long int y = 2;
	long int z;

	printf("%lu, ", x);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		count++;
	}
	return (0);
}
