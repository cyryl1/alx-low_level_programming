#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = strlen(n1) - 1, j = strlen(n2) - 1;, k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		carry = sum / 10;
		if (k < size_r - 1)
			r[k++] = sum % 10 + '0';
		else
			return (0);
	}
	r[k] = '\0';

	for (int l = 0, m = k - 1; l < m; l++, m--)
	{
		char tmp = r[l];
		r[l] = r[m];
		r[m] = tmp;
	}

	return (r);
}
