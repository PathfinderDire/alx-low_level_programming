#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * reverse_array - reverses n intigers of string
 * Return: returns Void
 * @n: size of string
 * @a: string to be revered
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp, temp2;

	if (n != 2)
	{
		while (i <= (n / 2))
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		};
	}
	else
	{
		temp2 = a[1];
		a[1] = a[0];
		a[0] = temp2;
	};


}
