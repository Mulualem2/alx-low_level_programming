#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program
 * @ac: int type number
 * @av: char type pointer
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *x, *y;
	int i, j, z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, z = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, z++)
			;
		z++;
	}
	z++;

	x = malloc(z * sizeof(char));
	if (x == NULL)
		return (NULL);

	y = x;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*x = av[i][j];
			x++;
		}
		*x = '\n';
		x++;
	}

	return (y);
}
