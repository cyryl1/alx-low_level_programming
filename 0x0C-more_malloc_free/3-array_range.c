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
	int size, i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
