#include "main.h"

/**
 * *str_concat -  function that concatenates two strings.
 *@s1:string 1
 *@s2:string 2
 *Return: point to a newly allocated space
 *or NULL treat it as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	int i, concat_i = 0, len = 0;
	char *concat_s;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat_s = malloc(sizeof(char) * len);
	if (concat_s == NULL)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
		concat_s[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_s[concat_i++] = s2[i];
	return (concat_s);
}
