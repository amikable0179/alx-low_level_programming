#include "main.h"

/**
* _isalpha - checks lowercase and uppercase alphabets
*Return: 1 else 0
*@c: arbitrary letter
*/
int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	return (1);
	else if (c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
}
