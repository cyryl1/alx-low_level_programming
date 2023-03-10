#include "main.h"
#include <stddef.h>
/**
 * _strstr - Finds the first occurence of the substring needel
 * in the string haystack
 *
 * @haystack: The string to search in
 * @needle: the substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!haystack || !needle)
	{
		return (NULL);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
