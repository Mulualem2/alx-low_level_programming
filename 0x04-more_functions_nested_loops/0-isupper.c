#include "main.h"
/**
  *_isupper - check wheather the in put is uppercase or not
  *@c: intiger type variable
  *Return: 1 (is uppercase) or 0 (is lowercase)
  */

int _isupper(int c)
{
	if (c > 64 && c < 91 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
