#include "main.h"
#include <string.h>

/**
 * string_toupper- Changes all lower to upper case
 * Return: updated string pointer
 */

char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		};
	};
	return (s);


}
