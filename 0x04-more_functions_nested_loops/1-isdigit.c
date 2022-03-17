#include "main.h"
/**
  *_isdigit - check weather c is number or not
  *@c: integer type number
  *Return: 1 if c is number or 0 if c is not number
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
