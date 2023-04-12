#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int _Atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**_slen - returns the length of a string
 * @s:  pointer to string
 *
 * Return: string length
 */

unsigned int _Slen(const char *s)
{
	unsigned int j = 0;

	while (s[j] != '\0')
		j++;

	return (j);
}

/**
 * binary_to_uint - converts binary chars to unsigned decimal
 * @b: pointer to binary chars
 *
 * Return: 0 if b is Null or contains non binary digits
 * or number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int last, base = 1, dec = 0;

	if (b == NULL)
		return (0);

	for (idx = (_Slen(b) - 1); idx >= 0; idx--)
	{
		last = _Atoi(b[idx]); /* convert char to int */

		if (last != 0 && last != 1)
			return (0);

		dec += last * base;
		base *= 2;
		
		#ifdef DEBUG /*print debug statements*/
		printf("Result is %u.\n", dec);
		#endif
	}
	return (dec);
}
