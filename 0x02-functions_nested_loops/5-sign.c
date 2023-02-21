#include "main.h"
/**
 * print_sign - to print the sign of a number
 * @n: the character to check
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
