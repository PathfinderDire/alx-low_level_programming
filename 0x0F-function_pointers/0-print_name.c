#include "function_pointers.h"
#include <stdio.h>
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
