#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * rev_string - Prints string;
 * Return: returns Void;
 * @s: string
 */

void rev_string(char *s)
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
