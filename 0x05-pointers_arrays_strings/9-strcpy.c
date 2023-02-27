#include "main.h"

/**
 * *_strcpy - to copy string from one place to another
 * @dest: where string is to copied to
 * @src: where string is copied from
 *
 * Return: always 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
