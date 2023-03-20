#include <stdio.h>
/**
 * main: computes the absolute value of a number x.
 *
 * Return: void
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void)
{
	int a = -5;
	double b = -3.14159;
	printf("ABS(%d) = %d\n", a, ABS(a));
	printf("ABS(%.2f) = %.2f\n", b, ABS(b));
	return (0);
}
