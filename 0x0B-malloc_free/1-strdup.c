#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - creates an array
 * @str: size of me,eory allpc
 *
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	int s = strlen(str);
        char *ptr = (char *) malloc(s);

	if (ptr == NULL)
        {
		printf("Can't allocate %d bytes)\n", s);
		return (NULL);
	};
	ptr = str;
        if (str != NULL)
        {
		return (ptr);
	};
	if (ptr == NULL)
		return (NULL);
	else 
		return (NULL);
}
