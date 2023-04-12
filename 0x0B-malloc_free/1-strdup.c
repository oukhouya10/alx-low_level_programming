#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 *given as a parameter
 *@str:sting that's gonna be copied
 *
 *Return:in case of ERROR NULL,point to allocated
 *memory
 */

char *_strdup(char *str)
{
	char *dp;
	int index, l;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		l++;
	dp = malloc(sizeof(char) * (l + 1));

	if (dp == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		dp[index] = str[index];
	}
	dp[l] = '\0';

	return (dp);
}
