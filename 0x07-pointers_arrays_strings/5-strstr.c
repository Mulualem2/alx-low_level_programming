#include "main.h"
/**
  *_strstr -locates substring
  *@haystack: char type pointer
  *@needle: char type piinter
  *Return: pointer or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystyack != 0; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
