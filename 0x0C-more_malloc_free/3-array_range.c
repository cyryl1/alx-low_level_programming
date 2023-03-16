#include "main.h"
/**
 * array_range - to create an array of integers
 * @min: minimum size
 * @max: maximum size
 *
 * Return: returns an integer
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
