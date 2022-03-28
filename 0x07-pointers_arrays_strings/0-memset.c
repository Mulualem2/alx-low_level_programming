#include "main.h"
/**
  **_memset - fills memory with a constant byte
  *@s: char type pointer
  *@b: char type variable
  *@n: int type variable
  :Return: pointer to the memory area
  */

char *_memset(char *S, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		return (s);
	}
}
