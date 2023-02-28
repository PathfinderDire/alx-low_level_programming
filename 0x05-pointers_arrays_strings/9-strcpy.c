#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies String
 * Return:the new string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	setbuf(stdout, dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] != ' ')
		{
			_putchar(src[i]);
		}
		else if (src[i] == ' ')
		{
			_putchar(' ');
		}
	};
	if (src[i] == '\0')
                {
                        _putchar('\n');
                };
	setbuf(stdout, NULL);
	return (dest);


}
