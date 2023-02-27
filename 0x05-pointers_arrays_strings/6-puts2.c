#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * puts2 - Prints string;
 * Return: returns Void;
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			_putchar(str[i]);
		}
		else if (str[i] == ' ')
		{
			_putchar(' ');
		};
		i = i + 2;
	}
	_putchar('\n');


}
