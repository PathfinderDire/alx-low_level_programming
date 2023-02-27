#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _puts - Prints string;
 * Return: returns Void;
 * @str: string
 */

void _puts(char *str)
{
	int length = strlen(str);
	int i = 0;

	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');


}
