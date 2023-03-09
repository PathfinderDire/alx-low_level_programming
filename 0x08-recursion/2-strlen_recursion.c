#include "main.c"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: String given
 *
 * Return: length in int
 */

int _strlen_recursion(char *s)
{
	int c = 0, i = 0;

	while (s[i] != '\0')
	{
		c++;
		s++;
		_strlen_recursion(s);
	};
	return (c);


}
