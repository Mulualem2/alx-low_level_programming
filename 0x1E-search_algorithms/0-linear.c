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
	unsigned int index;

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
