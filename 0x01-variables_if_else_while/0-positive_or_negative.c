#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Begining of Code
 *
 * Return:is Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		{ printf("%d", n);
			printf(" is positive\n") ; }
	else if (n == 0)
	{ printf("%d", n);
		printf(" is zero\n") ; }
		else
		{ printf("%d", n);
			printf(" is negative\n") ; }
		;
	return (0);



}
