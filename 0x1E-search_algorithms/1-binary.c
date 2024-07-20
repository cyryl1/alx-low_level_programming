#include "search_algos.h"

/**
 * binary_search - searches for a value in a sortd array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: The value searched for
 *
 * Return: first index where value is located,
 *      -1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}

