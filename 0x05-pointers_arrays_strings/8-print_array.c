#include "main.h"
/**
 * print_array -  to print n elements of an array of integers
 * @a: the pointer usd in function
 * @n: igit to be printe
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
