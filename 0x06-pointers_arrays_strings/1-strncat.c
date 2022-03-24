#include "main.h"
/**
  **_strncat - concatinate string
  *@deat: char type pointer
  *@src: char type pointer
  *@n: int type number
  *Return: string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (c = 0; c < n; c++)
	{
		dest[i + c] = src[c];
		if (src[c] == '\0')
			c = n;
	}
	return (dest);
}
