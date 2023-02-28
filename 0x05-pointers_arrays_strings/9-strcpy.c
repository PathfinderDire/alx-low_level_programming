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
	for (i = 0; i <= strlen(src); i++)
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
	setbuf(stdout, NULL);
	return (dest);


}
