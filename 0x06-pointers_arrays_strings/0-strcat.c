#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - Concatenates 2 Strings
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	};
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	};
	dest[i] = '\0';
	return (dest);


}
