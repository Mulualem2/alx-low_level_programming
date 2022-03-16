#include "main.h"

/**
  *largest_number - returns the largest of three numbers
  *@a: first intiger
  *@b: second intiger
  *@c: third intiger
  *Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
