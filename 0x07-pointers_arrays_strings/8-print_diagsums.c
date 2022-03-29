#include "main.h"

#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix
 * @a: int type 2D array
 * @size: int type number
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum, s;

	i = 0;
	sum = 0;
	s = size * size;
	while (i < s)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < s)
	{
		if (i % (size - 1) == 0 && i != (s - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
