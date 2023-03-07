#include "main.h"
#include <string.h>

/**
 * _strspn - prints the number of bytes of src str in dest
 * @s: dest strimg
 * @accept: src string
 * Return: pointer to dest
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;

	int lens = strlen(accept);
	int lend = strlen(s);

	for (int i = 0; i < lens; i++)
	{
		int true = 0;

		for (int j = 0; j < lend; j++)
		if (accept[j] == s[i])
		{
			true = 1;
			break;
		};
		if (true == 0)
			break;
		else
			cnt++;
	};
	return (cnt);


}
