#include <stdio.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Prints number of arguments passed to it
 *Return: 0 when run to completion
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; argc > count; count++)
	printf("%s\n", argv[count]);
	return (0);
}
