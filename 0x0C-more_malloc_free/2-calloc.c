#include "main.h"

/**
 * _calloc -  function that allocates memory for an array
 *using malloc.
 *@nmemb:allocates memory for an array
 *@size:allocates elements of size bytes
 *Return:returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
	{
		p[x] = 0;
	}
	return (p);
}
