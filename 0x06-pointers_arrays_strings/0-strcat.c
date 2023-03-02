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
	int len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (int i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	};
	return (dest);


}
