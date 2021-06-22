#include "holberton.h"
/**
*print_last_digit - prints the last digit of a number
*@n: arbitrary integer value
*
*Description: This program will return the last digit of a number
*Return: last digit
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	{
	if (last_digit < 10)

	{
	_putchar(-last_digit + '0');
	return (-last_digit);
	}
	else
	_putchar(last_digit + '0');
	return (last_digit);
	}
}
