#include "variadic_functions.h"

/**
 *print_numbers -  prints numbers with separator
 *@separator:the string to be printed between numbers
 *@n:number of arg
 *@...:integer to print
 *
 *Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list li;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(li, n);
	while (i--)
		printf("%d%s", va_arg(li, int),
				i ? (separator ? separator : "") : "\n");
	va_end(li);
}
