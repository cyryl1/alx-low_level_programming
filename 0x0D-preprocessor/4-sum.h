#include <stdio.h>
/**
 * main -  that computes the sum of the numbers x and y.
 *
 * Return: void
 */
#define SUM(x, y) ((x) + (y))

int main(void)
{
	int x, y;
	printf("SUM(%i, %i) = %i\n", x, y, SUM(x, y));
	return (0);
}
