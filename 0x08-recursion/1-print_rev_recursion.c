#include "main.h"
#include <string.h>


/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: string printed
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	else {
		s++;
		_print_rev_recursion(s);
	};
	_putchar(s[(i-1)]);


}
