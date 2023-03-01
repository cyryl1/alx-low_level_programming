#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified
 */
char *string_toupper(char *str)
{
	size_t len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	return str;
}
