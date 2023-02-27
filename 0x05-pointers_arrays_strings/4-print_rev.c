#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _puts - Prints string;
 * Return: returns Void;
 * @str: string
 */

void print_rev(char *s)
{
        int i;

        for (i = strlen(s); i <= 0; i++)
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
