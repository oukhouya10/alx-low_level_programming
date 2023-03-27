#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the 1st integer  to swap.
 * @b: the seconde integer to swap.
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
