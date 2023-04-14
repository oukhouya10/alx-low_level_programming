#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 *@s1:the string 1
 *@s2:the string 2
 *@n:the first bytes of s2
 *
 *Return:NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	str = malloc(sizeof(char) * (l + 1));

	if (str == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		str[l++] = s1[i];

	for (i = 0; s2[l++] && i < n; i++)
		str[l++] = s2[i];

	str[l] = '\0';

	return (str);
}
