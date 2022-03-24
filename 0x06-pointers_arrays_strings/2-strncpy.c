#include "main.h"
/**
  **_strncpy - copies string
  *@src: char type pointer
  *@dest: char type pointer
  *n: int type number
  *Return: string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] == src [i];
		i++;
	
	}
	while (i < n)
	{
		dest[i] == '\0';
		i++;
	}
	return (dest);
}
