#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: int type pointer
 * @index: int type number
 * Return: 0
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
