#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: String to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}


}
