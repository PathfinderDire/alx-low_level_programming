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
	int p = (strlen(src) - 1);
	setbuf(stdout, dest);
	for (i = 0; i <= p; i++)
	{
		if (src[i] != ' ')
		{
			_putchar(src[i]);
		}
		else if (src[i] == ' ')
		{
			_putchar(' ');
		};
		_putchar('\n');
	};
	setbuf(stdout, NULL);
	return (dest);


}
