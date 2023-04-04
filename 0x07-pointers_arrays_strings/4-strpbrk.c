#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: the string
 * Return: pointer to the byte in s that matches one
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0 ; accept[x] ; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (NULL);
}
