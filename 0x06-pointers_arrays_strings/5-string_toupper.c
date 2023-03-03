#include "main.h"
#include <string.h>

/**
 * string_toupper - Changes all lower to upper case
 * Return: updated string pointer
 * @str: string accepted
 */

char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		};
	};
	return (str);


}
