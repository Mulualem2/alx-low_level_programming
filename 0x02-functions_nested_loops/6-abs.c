#include "main.h"
/**
  *_abs - find absolyute value of the givien number
  *@n: int type number
  *Return: n (positive) n * -1 (if it is negative)
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
