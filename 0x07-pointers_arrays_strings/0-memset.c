#include "main.h"

/**
 * *_memset - that fill memory with a cte byte
 * @n: byte of the memory area s
 * @s: a pointer to the block of memory to fill
 * @b: cte byte b
 *
 *return : a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
