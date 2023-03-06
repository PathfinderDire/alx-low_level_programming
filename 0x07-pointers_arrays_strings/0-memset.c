#include "main.h"
#include <string.h>

/**
 * _memset - Sets n bytes with constant byte b
 * @s: the pointer to memory to be assigned
 * @b: constant byte
 * @n: n bytess to be assigned with b
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
