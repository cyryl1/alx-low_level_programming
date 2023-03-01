#include "main.h"
#include <string.h>
/**
 * rot13 - apply the ROT13 encoding to a string
 * @str: the string to encode
 *
 * Return:  a pointer to the encode
 */
char *rot13(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		int c = str[i];

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			str[i] += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			str[i] -= 13;
		}
	}

	return str;
}
