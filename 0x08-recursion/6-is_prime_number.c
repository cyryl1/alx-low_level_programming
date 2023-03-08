#include "main.h"
#include "prime.c"
/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}
