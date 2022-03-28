#include "main.h"
/**
  *_strspn - get the length of prifix substring
  *@s: char type pointer
  *@accept: char type pointer
  *Return: number of bytes in intial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
