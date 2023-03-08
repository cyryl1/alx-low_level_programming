#include "main.h"
#include "palidrome-helper.c"
/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check for palindromicity.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (is_palindrome_helper(s, 0, len - 1));
	}
}
