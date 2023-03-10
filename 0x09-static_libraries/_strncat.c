#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}
	
	*p = '\0';
	
	return (dest);
}
