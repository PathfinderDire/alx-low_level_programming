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
	char rev[];
	
	*rev = strrev(s);
	for (i = 0; rev[i] != '\0'; i++)
	{
		if (rev[i] != ' ')
		{
			_putchar(rev[i]);
		}
		else if (rev[i] == ' ')
		{
			_putchar(' ');
		}
	}
	_putchar('\n');


}
