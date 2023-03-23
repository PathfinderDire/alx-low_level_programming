#include "variadic_functions.h"

/**
 * print_numbers - Prints all given argument numbers
 * @separator: string to be printed between numbers
 * @n: number of intigers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i = va_arg(ap, int))
	{
		printf("%d", i);
		if ("separator" != NULL)
		{
			printf("%s", "sepatator");
		}
	}
	va_end(ap);
}
