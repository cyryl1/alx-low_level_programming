#include "3-calc.h"

/**
 * op_add - function to add
 * @a: input one
 * @b: input two
 *
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: input one
 * @b: input two
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiplies
 * @a: input one
 * @b: input two
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to div
 * @a: input 1
 * @b: input 2
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to mod
 * @a: input one
 * @b: input two
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
