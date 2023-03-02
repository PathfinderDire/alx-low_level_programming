#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - Concatenates 2 Strings
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 * @n: Number of char to be concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int p, i = 0, j = 0;
	p = strlen(src);

	while (dest[i] != '\0')
	{
		i++;
	};
	while ((j < n) && (j <= p))
	{
		dest[i] = src[j];
		i++;
		j++;
	};
	dest[i] = '\0';
	return (dest);


}
