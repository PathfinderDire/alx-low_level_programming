#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates 2 Strings
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 */

char* _strcat(char *dest, char *src)
{
	int len1 = strlen(src);
	int len2 = strlen(dest);
	char dest[len1 + len2];

	for (int i = 0; i <= strlen(src); i++)
	{
		dest[strlen(dest) + i] = src[i];
	};
	return (dest);


}
