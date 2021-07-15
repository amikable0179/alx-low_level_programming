#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: size bytes
 *
 * Return: pointer new allocated memory
 * If fails, exit value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
