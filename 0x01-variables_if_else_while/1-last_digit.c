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
	if (n % 10 > 5)
	{ printf("Last digit of %d", n);
		printf(" is ");
		printf("%d", n % 10);
			printf(" and is greater than 5\n"); }
	else if (n % 10 == 0)
	{ printf("Last digit of %d", n);
		printf(" is ");
		       printf("%d", n % 10);
		       printf(" and is 0\n"); }
	else
	{printf("Last digit of %d", n);
		printf(" is ");
		printf("%d", n % 10);
		printf(" and is less than 6 and not 0\n"); }
	;
	return (0);


}
