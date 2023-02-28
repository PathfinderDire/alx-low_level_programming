#include "main.h"
#include <string.h>

/**
 * puts_half - Prints 2nd half of sstring
 * Return: Void
 */

void puts_half(char *str)
{
	int p = strlen(str) / 2;
	for (int i = p; i < strlen(str); i++)
	{
		if ( strlen(str) % 2 != 0)
		{
			i = i++;
		}
		_putchar(str[i]);
	}


}
