#include "main.h"
/**
  **_strncat - concatinate string
  *@deat: char type pointer
  *@src: char type pointer
  *@n: int type number
  *Return: string
  */
char *_strncat(char *dest, char *src)
{
	int len =0;
	int i;

	while (dest[len])
	{
		len++;
	}
	while (i < n && src[i])
	{
		dest[len] == src[i];
		len++;
		i++;
	}
	dest[len + n + 1] = '\0';

	return (dest);
}
