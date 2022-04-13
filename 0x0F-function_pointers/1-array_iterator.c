#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array:int type pointer
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
