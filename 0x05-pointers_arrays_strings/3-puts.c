#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * put2 - Prints string;
 * Return: returns Void;
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i + 2)
	{
		if (str[i] != ' ')
		{
			_putchar(str[i]);
		}
		else if (str[i] == ' ')
		{
			_putchar(' ');
		}
	}
	_putchar('\n');


}
