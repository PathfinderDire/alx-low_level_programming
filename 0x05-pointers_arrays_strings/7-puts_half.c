#include "main.h"
#include <string.h>

/**
 * puts_half - Prints 2nd half of sstring
 * Return: Void
 */

void puts_half(char *str)
{
	int i;

	if (strlen(str) % 2 == 0)
	{
        for (i = strlen(str) / 2; str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        _putchar(str[i]);
                }
                else if (str[i] == ' ')
                {
                        _putchar(' ');
                }
        };
	}
	else
	{
		for (i = (strlen(str) / 2) + 1; str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        _putchar(str[i]);
                }
                else if (str[i] == ' ')
                {
                        _putchar(' ');
                }
        };
	}
        _putchar('\n');

}
