#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates sum of arguments
 * @n: arguments
 *
 * Return: sum in main funtion (1122 \n 500)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (x = 0; x < n; x++)
	sum += va_arg(ap, const int);
	return (sum);
}
