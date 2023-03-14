#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of size
 * @size: size of me,eory allpc
 * @c: character to be assigned
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size);
	unsigned int i = 0;

	if (size != 0)
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		};
		if (ptr != NULL)
			return (ptr);
		else if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
}
