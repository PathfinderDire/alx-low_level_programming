#include "main.h"

/**
 * print_sign - prints sign of number
 * Return: 1 if pos, 0 if zero , -1 if Neg
 * @n: Nummber to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{ _putchar('+');
		return (1);
	};
	if (n == 0)
	{ _putchar(48);
		_putchar(0);
		return (0);
	};
	if (n < 0)
	{ _putchar('-');
		return (-1);
	};
	return (0);


}
