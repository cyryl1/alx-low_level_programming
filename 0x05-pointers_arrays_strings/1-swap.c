#include "main.h"
/**
 * swap_int - to swap the values of two integers.
 * @a: first pointer used in the function
 * @b: second pointer used in the function
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
