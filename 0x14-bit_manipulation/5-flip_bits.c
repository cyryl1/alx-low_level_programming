#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	/*xor n and m*/
	diff = n ^ m;

	do {
		diff_bits += (diff & 1);
		diff >>= 1;

	} while (diff > 0);

	return (diff_bits);
}
