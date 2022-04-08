#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * @b: unsigned int memory size to allocate
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
