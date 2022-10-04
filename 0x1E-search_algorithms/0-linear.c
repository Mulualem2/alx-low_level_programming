#include "search_algos.h"

/**
 * linear_search - sequentially search an array for a value.
 * Must also print each value compared while searching.
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value in array or -1 if error or not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
