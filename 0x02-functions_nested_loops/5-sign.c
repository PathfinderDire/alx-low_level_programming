#include "main.h"

/**
 * int print_sign - prints sign of number
 * Return: 1 if pos, 0 if zero , -1 if Neg
 * @n: Nummber to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{ _putchar('+');
		return (1);
	}
	if (n == 0)
	{ _putchar(n);
		return (0);
	}
	if(n<0) 
	{ _putchar('-');
		return (-1);
	};
	return (0);


}
