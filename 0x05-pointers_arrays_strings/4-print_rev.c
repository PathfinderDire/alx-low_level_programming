#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * print_rev - Prints string;
 * Return: returns Void;
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
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
