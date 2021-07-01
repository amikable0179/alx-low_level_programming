#include "holberton.h"
/**
* _strcat: Concatenates the string pointed to by @src,
* null byte, to the end of the string pointed to by @dest.
* @dest: A pointer to the string to be concantenated.
* @src: the source string to be concantenated.
*
* return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
char *origin = dest;

while (*dest != '\0')
	dest++;

while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
*dest = '\0';
return (origin);
}
