#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a number
 * @n: given intiger
 *
 * Return: -1 if n is negative or Factorial of n
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
		return (-1);
	else
		return (1);


}
