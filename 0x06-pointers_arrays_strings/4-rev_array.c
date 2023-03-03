#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * reverse_array - reverses string;
 * Return: returns Void;
 * @s: string
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i <= 0; i--)
	{
		a[i] = a[n];
	};


}
