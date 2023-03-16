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
	int size = max - min + 1;
	int* arr = (int*) malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
