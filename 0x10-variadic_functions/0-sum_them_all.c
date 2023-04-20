#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 *@n:number of arguments
 *@...:the integer sum
 *
 *Return:integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list li;

	if (!n)
		return (0);
	va_start(li, n);
	while (i--)
		sum += va_arg(li, int);
	va_end(li);
	return (sum);
}
