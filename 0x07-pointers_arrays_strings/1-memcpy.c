#include "main.h"

/**
 * _memcpy - copies n memory
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;
	while (n > 0)
	{
		dest[i] = src [j];
		i++;
		j++;
		n--;
	};
	return (dest);


}
