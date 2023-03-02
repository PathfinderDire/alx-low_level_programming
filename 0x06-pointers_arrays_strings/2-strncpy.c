#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - Concatenates 2 Strings like strcpy
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 * @n: Number of char to be concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p, i = 0, j = 0;

	p = strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	};
	while ((j < n) && ( src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	};
	dest[i] = '\0';
	return (dest);


}
