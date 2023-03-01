#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to te string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	size_t len = strlen(str), i;
	int capitalize_next = 1;

	for (i = 0; i < len; i++)
	{
		if (capitaize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		capitalize_next = isspace(str[i]) || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' ||
			str[i] == '}';
	}
}
