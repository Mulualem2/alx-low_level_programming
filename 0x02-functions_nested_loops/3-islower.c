#include "main.h"
/**
  *-islower - check whetre the input is lowercase or not
  *
  *Return 1 (lowercase) and 0 (uppercase)
  */
int _islower(int c)
{
	if (c > 96 && c< 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

