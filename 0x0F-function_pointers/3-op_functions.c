#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function to add
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiplies
 * @a: input one
 * @b: input two
 * Return: 0
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
	return (a / b);
}

/**
 * op_mod - function to mod
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_mod(int a, int b)
{
	return ( a % b);
}
