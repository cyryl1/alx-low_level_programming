#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long long a = 1, b = 2, c;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%lld", c);

		if (i < n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		a = b;
		b = c;
	}
	return (0);
}
