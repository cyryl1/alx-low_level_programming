#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - to return if a string is palindrome.
 * @s: String to check
 * @start: index of the first character to check.
 * @end: index of the last character to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return is_palindrome_helper(s, start + 1, end - 1);
	}
}
