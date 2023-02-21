#include "main.h"
/**
 * int _abs - to print the absolute value of an integer
 * @n: the integer to compute the absolute value
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
