#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - more headers goes there
*/

/**
*
* main - logic
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
	printf("is positive\n");
	}
	if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
	pirntf("is zero\n");
	}
/* your code goes there */
	return (0);
}
