#include "main.h"

/**
 * print_last_digit - Prints last dig
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;
	
	last = n % 10;
	if (n < 0) 
	{
		last = last * -1;
	}
	_putchar(last);
	return (last);


}

