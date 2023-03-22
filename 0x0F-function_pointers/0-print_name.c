#include "function_pointers.h"
#include <stdio.h>

/**
 * prnt - a called function to print name
 * @s: pointer to name string
 *
 * Return: nothing
 */
void prnt(char *s)
{
	for (int i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	};
}
/**
 * print_name - prints name given.
 * @name: string name given
 * @f: pointer to the function prnt
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
