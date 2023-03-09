#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: String given
 *
 * Return: length in int
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int c;

	if (s[i] != '\0')
	{
		s++;
		c = _strlen_recursion(s) + 1;
		return (c);
	};


}
