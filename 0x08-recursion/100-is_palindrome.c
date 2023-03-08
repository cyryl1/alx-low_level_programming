#include "main.h"
/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check for palindromicity.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}

	if (s[0] == s[len - 1])
	{
		return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
	}
	else
	{
		return (0);
	}
}
