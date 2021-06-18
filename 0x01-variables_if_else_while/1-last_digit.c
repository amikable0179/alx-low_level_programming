#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number to the variable n
 *using printf
 *and is greater than 5, and is 0
 *and is less than 6 and not 0
 *return: returns 0 as successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and it less than 6 and not 0\n", n, n % 10);
	return (0);
}
