#include "main.h"

/**
 * _isdigit - Checks if the Char is Upper or Lower case
 * @c: Alphabet checked
 * Return: is 1 if upper case 0 otherwise
 */

int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	else
		return (0);


}
