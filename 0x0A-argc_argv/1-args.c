#include <stdio.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Prints number of arguments passed to it
 *Return: 0 when run to completion
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc);
	return (0);
}
