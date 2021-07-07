#include "holberton.h"
/**
 *_pow_recursion - print thepower of a number
 *@x: number
 *@y: power
 *Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
