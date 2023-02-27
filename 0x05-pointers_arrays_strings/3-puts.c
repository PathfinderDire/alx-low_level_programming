#include "main.h"
#include "string.h"

/**
 * _puts - Prints string;
 * Return: returns Void;
 * @str: string
 */

void _puts(char *str)
{
	int i;
	int p = strlen(str);

	while ((i = 0) && (i < p))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');


}
