#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: char type pointer
 * @needle: char type pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}