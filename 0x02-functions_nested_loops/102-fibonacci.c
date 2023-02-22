#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 50, a = 1, b = 2, i, c;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf("%d", c);

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
