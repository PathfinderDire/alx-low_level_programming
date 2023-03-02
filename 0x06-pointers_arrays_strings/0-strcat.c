#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates 2 Strings
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 */

char *_strcat(char *dest, char *src)
{
	for (int i = 0; i <= strlen(src); i++)
	{
		dest[strlen(dest) + i] = src[i];
	};
	return (dest);


}
