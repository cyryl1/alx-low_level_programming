#include "main.h"
/**
 * malloc_checked - to allocate memory using malloc.
 * @b: used to allocate memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
