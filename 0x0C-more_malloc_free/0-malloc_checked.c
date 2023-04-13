#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *@b:integer
 * Return:pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *x =  malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
