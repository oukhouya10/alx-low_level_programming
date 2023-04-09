#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 *@n: function copies n bytes
 *
 *@src: from memory area
 *
 *@dest: a pointer to dest
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
