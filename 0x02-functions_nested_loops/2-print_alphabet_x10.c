#include "holberton.h"
/**
* print_alphabet_x10 - prints lowercase alphabets 10 times
* result: 0
*/

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
	int letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	counter++;
	_putchar('\n');
	}
}
