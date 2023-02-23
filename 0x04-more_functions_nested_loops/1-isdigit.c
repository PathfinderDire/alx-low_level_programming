#include "main.h"

/**
 * _isdigit - Checks if the Char is Upper or Lower case
 * @c: Alphabet checked
 * Return: is 1 if upper case 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);


}
