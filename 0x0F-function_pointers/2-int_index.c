#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - looks for an intiger in anarray
 * @array: array given
 * @size: size of array
 * @cmp: pointer to compairing function
 *
 * Return: index of first intiger, or -1 if None found, or -1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			};
		};
	}
	else
		return (-1);
}
