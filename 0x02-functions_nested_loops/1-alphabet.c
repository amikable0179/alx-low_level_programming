#include "holberton.h"

/**
* main - prints lowercase alphabets
*using only _putchar twice
* return: 0 success
*/
void print_alphabet(void)
{
	int letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}

	_putchar('\n');
}
