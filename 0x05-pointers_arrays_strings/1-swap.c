#include "main.h"
/**
  *swap_int - swaps the values two  integer type numbers
  *@a: integer type pointer
  *@b: integer type pointer
  *Return: void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
