#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * This program prints positive if the input value is greater than zero
 * prints negative if the value is lesser than zero
 * prints zero if equal to zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else (n < 0)
		printf("is negative\n");
	return (0);
}
