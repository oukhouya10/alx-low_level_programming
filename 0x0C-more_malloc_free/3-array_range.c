#include "main.h"

/**
 *array_range - function that creates an array of integers.
 *@min :values
 *@max :values
 *Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int x, *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		p[x] = min;
		min++;
	}
	return (p);
}
