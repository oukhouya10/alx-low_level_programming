#include "main.h"

/**
 *get_endianness - function that checks the endianness
 *
 *Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian = (char *)&check;

	if (*endian)
	{
		return (1);
	}
	return (0);
}
