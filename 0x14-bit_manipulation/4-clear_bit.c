#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int post = 1;

	if (index > INT_BITS)
		return (-1);

	post = ~(post << index);

	*n = (*n & post);

	return (1);
}
