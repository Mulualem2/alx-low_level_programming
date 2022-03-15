#include "main.h"
/**
  *_isalpha - check if the in put is alphabetmain
  *@c:int type  character
  *Return: 0 (not alphabet) 1 (is alphabet)
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
