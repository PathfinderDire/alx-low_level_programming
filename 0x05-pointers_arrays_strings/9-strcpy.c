#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies String
 * Return:the new string
 * @src: string to be copies
 * @dest: new string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int p = strlen(src);


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
		}
		else if (src[i] == '\0')
		{
			break;
		};
	};
	setbuf(stdout, NULL);
	return (dest);


}
