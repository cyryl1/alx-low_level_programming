#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - to return a pointer to a new string
 * and duplicte of the string
 * 
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = (char *) malloc((strlen(str) + 1) * * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return dup_str;
}
