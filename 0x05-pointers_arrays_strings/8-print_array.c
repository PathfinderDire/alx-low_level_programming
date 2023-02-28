#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * print_array - Prints string;
 * Return: returns Void;
 * @a: Array accepted
 * @n: number of intigers to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		};
	};
	printf("\n");


}
