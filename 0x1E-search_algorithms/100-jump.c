#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: The value searched for
 *
 * Return: first index where value is located,
 *      -1 If value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev;
	size_t block;
	size_t i;

	if (array == NULL)
		return (-1);

	prev = 0;
	block = sqrt(size);


	while (array[min(block, size)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", min(block, size),
				array[min(block, size)]);
		prev = block;
		block += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev, min(block, size));

	for (i = prev; i < min(block, size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
