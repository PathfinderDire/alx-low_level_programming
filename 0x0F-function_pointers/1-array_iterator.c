#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each array given
 * @size: size of array
 * @array: array given
 * @action: a pointer to the function called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array == NULL) || (size == 0))
	{
		return;
	};
	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	};
}
