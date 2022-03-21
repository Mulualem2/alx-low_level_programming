#include "main.h"
/**
  *_strlen - returns length of the string passed
  *@s: char type pointer
  *Return: string length
  */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	return (x);
}
