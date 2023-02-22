#include "main.h"

/**
 * _isalpha- Checks Alphabet
 * Return: 1 if letter 0 if not
 * @c: is Charter to be checked
 */

int _isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
