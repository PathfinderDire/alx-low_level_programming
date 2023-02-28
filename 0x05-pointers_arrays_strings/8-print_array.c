#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _puts - Prints string;
 * Return: returns Void;
 * @str: string
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		printf(", ");
	};
	_putchar('\n');


}
