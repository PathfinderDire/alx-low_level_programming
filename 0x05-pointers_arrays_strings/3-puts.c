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
	int i;

	for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] != ' ')
	{
            _putchar(str[i]);
        }

}
		_putchar('\n');


}
