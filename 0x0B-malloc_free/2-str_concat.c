#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to conc string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j = 0;
	unsigned int p = strlen(s1) - 1;
	unsigned int q = strlen(s2) + p;
	char *ptr = (char *) malloc(sizeof(char) * (p + q));
	if (ptr == NULL)
	{
		printf("Can't allocate memory\n");
		return (NULL);
	};
	while (p < q)
	{
	s1[p] = s2[j];
	p++;
	j++;
	};
	ptr = s1;
	return (ptr);
}
