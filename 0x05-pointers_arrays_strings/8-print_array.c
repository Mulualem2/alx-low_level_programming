#include <stdio.h>
#include "main.h"

/**
  *print_array - prints array elements separated by comma
  *@a: int type pointer
  *@n: int type number
  *Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);

			if (i == (n - 1))
			{
				printf("%d", a[n - 1]);
			}
	}
	printf("\n");
}
