#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - print the sum of to diagonalof a square matrix
  *@a: int type pointer
  *@size: int type number
  *Return: void
  */

void print_diagsums(int *a; int size)
{
	int i, n;
	int t1, t2;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		t1 = t1 + a[i];
	}
	for (n = size - 1; n = (size * size) - size; n = n + size - 1)
	{
		t2 = t2 + a[i];
	
	}
	printf("%d,%d\n", t1, t2);
}
