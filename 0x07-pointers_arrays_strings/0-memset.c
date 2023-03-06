#include "main.h"

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
	for (int i = 0; i < n; i++)
	{
		*(s + i) = b;
	};
	return (s);


}
