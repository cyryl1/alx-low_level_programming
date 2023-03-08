#include "main.h"
/**
 * factorial - to return the factorial of a given number.
 * @n: number
 *
 * Return: always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /*Error: invalid argument*/
	}
	else if (n == 0)
	{
		return (1);/*base case.*/
	}
	else
	{
		return (n * factorial(n - 1)); /*Recursive case*/
	}
}
