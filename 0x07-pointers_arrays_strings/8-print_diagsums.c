#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints a sum of the two diagonals of a square matrix of int
 *@a: array
 *@size:size of array
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		sum1 += a[x];
		sum2 += a[size - x - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
