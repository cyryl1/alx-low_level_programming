#include "main.h"
/**
 * _isalpha - to print alphabet
 * @c: character to check
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
