#include "holberton.h"

/**
* _islower - checks for lower case
*@c: arbitrary character
*return: 0 if false 1 if true
*/

int _islower(int c)
/*@c: arbitrary character*/

{
	if (c >= 'a' && c <= 'z')

	return (1);

	else
	return (0);
}
