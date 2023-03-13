#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - to conctenate two strings.
 *
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	
	return (result);
}
