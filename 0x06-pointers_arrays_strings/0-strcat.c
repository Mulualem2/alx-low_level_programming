#include "main.h"
/*
   ** *_strcat - concatenates two strings
   *@dest: char type pointer
   *@src: char type pointer
   *Return: charcter string
   */

char *_strcat(char *dest, char *src)
{
	int c, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for ( c = 0; src[c] != '\0'; c++)
	{
		dest[i] == src[c];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}
