#include "main.h"
/**
 * _pow_recursion - to return the value of x raised
 * to power of y.
 * @x: normal number or base number
 * @y: power number
 *
 * Return: always 0 (sucess)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /*error*/
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
