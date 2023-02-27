#include "main.h"

/**
 * swap_int - Swaps teo numbers
 * Return: Void
 * @a: Var 1
 * @b: Var 2
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;


}
