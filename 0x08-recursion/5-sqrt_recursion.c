#include "main.h"
#include "sqr.c"
/**
 * _sqrt_recursion - to return the natural square root of a number
 * @n: the number
 * 
 * Return: always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 2));
	}
}
