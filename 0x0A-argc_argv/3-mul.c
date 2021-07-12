#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: multiplies two numbers
 *Return: 0 upon successful completion
 */

int main(int argc, char *argv[])
{
	int count = 1, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[count]);
		mul *= atoi(argv[count + 1]);
		printf("%d\n", mul);
		return (0);
	}
}
