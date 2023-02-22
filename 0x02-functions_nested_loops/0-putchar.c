#include <stdio.h>

/**
 * main - prints out putchar
 *
 * Return:is Always 0
 */

int main(void)
{
	char msg[] = "_putchar";
	int count = 0;

	while (count < 8)
	{ putchar(msg[count]);
		count++;
	};
	putchar('\n');
	return (0);


}
