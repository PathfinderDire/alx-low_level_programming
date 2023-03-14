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
	char *ptr = (char*)malloc(size);

	if (size != 0)
	{
		for (int i = 0; i < size; i++)
				ptr[i] = c;
		return (ptr);
	}
	else
		return (NULL);
}
