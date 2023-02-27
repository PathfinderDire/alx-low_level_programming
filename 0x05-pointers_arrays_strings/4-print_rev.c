#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * print_rev - Prints string;
 * Return: returns Void;
 * @s : String
 */

void print_rev(char *s)
{
	int i;

	for (i = 10; s[i] != '\0'; i--)
	{
		if (s[i] != ' ')
		{
			_putchar(s[i]);
		}
		else if (s[i] == ' ')
		{
			_putchar(' ');
		}
	}
	_putchar('\n');


}
