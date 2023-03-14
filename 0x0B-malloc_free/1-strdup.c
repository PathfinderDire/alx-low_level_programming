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
	unsigned int i = 0;
	unsigned int s = strlen(str);
	char *ptr = (char *) malloc((s) + 1);

	if (str == NULL)
		printf("Can't allocate memory.\n");
	return (NULL);
	if (ptr == NULL)
	{
		printf("Can't allocate %d bytes)\n", s);
		return (NULL);
	};
	while (i < s)
	{
		*(ptr + i) = *(str + i);
		i++;
	};
	if (str != NULL)
	{
		return (ptr);
	};
	if (ptr == NULL)
		return (NULL);
	else
		return (NULL);
}
