#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - To free dogs
 * @d: struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}
