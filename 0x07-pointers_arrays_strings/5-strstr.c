#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - finds the first occurreence of the substring needle in the
 * string haystack
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring, or Null
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	if (*haystack == '\0')
	{
		return (NULL);
	}

	char *ptr;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
			char *needle_ptr = needle;
			while (*needle_ptr != '\0' && *haystack != '\0' && *haystack == *needle_ptr)
			{
				haystack++;
				needle_ptr++;
			}

			if (*needle_ptr == '\0')
			{
				return (ptr);
			}

			haystack = ptr;
		}

		haystack++;
	}

	return (NULL);
}
