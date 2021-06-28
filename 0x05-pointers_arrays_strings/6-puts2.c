#include "holberton.h"

/**
* puts2 - prints every other character of a string, starting first character
* @str: pointer
* Return: 0
*/

void puts2(char *str)
{
	int a = 0;
	int b;

	while (*(str + a) != 0)
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(*(str + b));
	}
}
