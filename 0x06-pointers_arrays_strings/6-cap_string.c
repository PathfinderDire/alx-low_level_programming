#include "main.h"
/**
 * cap_string - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] == ',' == ';' == '.' == '!' == '?' == '(' == ')' == '{' == '}' == ' ')
		{
			if (n[(i + 1)] >= 'a' && n[(i + 1)] <= 'z')
			n[i] = n[i] - 32;
		i++;
		};
	};
	return (n);
}
