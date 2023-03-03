#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * reverse_array - reverses n intigers of string;
 * Return: returns Void;
 * @s: string
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	while (i <= (n/2))
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	};


}
