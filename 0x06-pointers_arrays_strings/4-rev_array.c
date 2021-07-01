#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
