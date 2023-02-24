#include <stdio.h>
/**
 * main - Finds and prints the largest prime
 * factor of the number 612852475143.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long long num = 612852475143, largest_factor = 1, i;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}

	printf("%11d\n", largest_factor);

	return (0);
}
