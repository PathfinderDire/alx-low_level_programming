#include <stdio.h>

/**
 * main - beginig of Code
 *
 * Return:is Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while ((n <= 122) && (n != 113 && n != 101))
	{putchar(n);
		n++;
	};
	putchar('\n');
	return (0);


}
