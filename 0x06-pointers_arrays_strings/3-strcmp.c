#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcmp - Compares 2 Strings
 * Return: 0 if comp stg is same , >0 if larger, <0 num if smaller
 * @s1: first stg
 * @s2: second stg
 */

int _strcmp(char *s1, char *s2)
{
	int d, i = 0;

	while (s1[i] == s2[i])
	{
		i++;
	};
	d = s1[i] - s2[i];
	return (d);


}
