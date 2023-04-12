#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int post = 1;

	if (index > INT_BITS)
		return (-1);

	post <<= index; /* shift post to the left by index */

	*n = (*n | post);

	return (1);
}
