#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string type pointer
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *x;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*x) + 1);
	if (x == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		x[j] = str[j];
	x[j] = '\0';

	return (x);
}
