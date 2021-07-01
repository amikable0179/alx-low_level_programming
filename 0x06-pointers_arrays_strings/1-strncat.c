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
	char *origin = dest;
	int counter = 0;

	while (*dest != '\0')
		dest++;

	while (counter < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (origin);
}
