#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_rev - Prints string;
 * Return: returns Void;
 * @s: string
 */

int main()
{
        int i;
	char *s;

        for (i = strlen(s) - 1; i >= 0; i--)
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
return (0);

}
