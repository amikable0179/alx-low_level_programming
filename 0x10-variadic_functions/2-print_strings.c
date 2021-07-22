#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prtstr;
	unsigned int i;
	char *str;

	va_start(prtstr, n);
	for (i= 0; i < n; i++)
	{
		str = va_arg(prtstr, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(prtstr);
}
