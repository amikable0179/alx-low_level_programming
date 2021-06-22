#include "holberton.h"

/**
* _islower - checks for lower case
*@c: arbitrary character
*Return: 0
*/

int _islower(int c)
/*@c: arbitrary character*/

{
	if (c >= 'a' && c <= 'z')

	return (1);

	else
	return (0);
}
