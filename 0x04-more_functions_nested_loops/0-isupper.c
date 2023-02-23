#include "main.h"

/**
 * _isupper - Checks if the Char is Upper or Lower case
 *
 * Return:0 if upper case , 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A'  && c <= 'Z')
		return(1);
	else
		return (0);


}
