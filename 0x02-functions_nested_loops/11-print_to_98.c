#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *
  *Description: prints n to 98
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	printf("\n");
}
