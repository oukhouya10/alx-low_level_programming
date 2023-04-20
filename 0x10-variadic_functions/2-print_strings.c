#include "variadic_functions.h"

/**
 * print_strings -  prints strings with separator
 *@separator:the string to be printed between the strings
 *@n:the number of strings passed
 *@...:string that be print
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(li, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(li);
}

