#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - Concatenates 2 Strings like strcpy
 * Return: the pointer Concatenated string
 * @dest: Destinaton stg
 * @src: Source String
 * @n: Number of char to be concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0, j = 0;
int p = strlen (src);
        while (j < n)
        {
            if (j <= p)
            {
                dest[i] = src[j];
                i++;
                j++;
            }
        else 
        {
            dest[i] = '\0';
            i++;
            j++;
        }
        };
        return (dest);


}
