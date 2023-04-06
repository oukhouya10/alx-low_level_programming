#include "main.h"

/**
 *_lenstr_recursion - length of the string
 *@s:the string
 *Return:lenght
 */
int _lenstr_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _lenstr_recursion(s + 1));
	return (0);
}
/**
 *pld_check - the string palindrome or not
 *@s:string main adresse
 *@x:left index
 *@y:right index
 *Return:1 if a string is a palindrome and 0 if not
 */
int pld_check(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
			return (1);
		else
			return (pld_check(s, x + 1, y - 1));
	else
		return (0);
}
/**
 *is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 *@s:string main adresse
 *Return: 1 is palindrome ,0 something else
 */
int is_palindrome(char *s)
{
	return (pld_check(s, 0, _lenstr_recursion(s) - 1));
}
