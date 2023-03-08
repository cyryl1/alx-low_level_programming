#include "main.h"
/**
 * _sqrt_helper - to return the square rrot of a number
 * @n: the number
 * @guess: The current guess for the square root.
 *
 * Return: always 0 (success)
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
