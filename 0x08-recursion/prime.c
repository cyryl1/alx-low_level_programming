#include "main.h"
/**
 * is_prime_helper - to determine if a number is prime.
 * @n: The number
 * @i: The current divisor to check
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
