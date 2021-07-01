#include "holberton.h"

/**
* _strncat- Copy str to dest
* @n: Number of bytes to use max
* @dest: String to copied to
* @src: String to be copied to dest
* Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
	dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
