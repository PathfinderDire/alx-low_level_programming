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
	for (int i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
		else
			return (0);
	}
	return (0);


}
