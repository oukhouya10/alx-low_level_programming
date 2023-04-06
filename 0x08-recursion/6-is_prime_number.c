#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number or not
 *@i:int
 *@n:int
 *Return:0 or 1
 */

int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 *check_prime - check numbers less than n if can divided
 *@n:int
 *@i:int
 *Return:int
 */

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
