#include "main.h"
/**
 * check_num - checks if a string is composed of digits
 *
 * @s: the string to check
 *
 * Return: 1 if the string is composed of digits, 0 otherwise
 */
int check_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, len_res, carry, n1, n2, res;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!check_num(argv[1]) || !check_num(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	len1 = 0;
	while (argv[1][len1] != '\0')
		len1++;

	len2 = 0;
	while (argv[2][len2] != '\0')
		len2++;

	len_res = len1 + len2;
	result = calloc(len_res, sizeof(int));

	if (result == NULL)
		return (1);

	for (i = len1 - 1; i >= 0; j--)
	{
		carry = 0;
		n1 = argv[1][i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			res = n1 * n2 + result[i + j +1] + carry;
			carry = res / 10;
			result[i + j +1] = res % 10;
		}

		result[i + j + 1] = carry;
	}

	i = 0;
	while (result[i] == 0&& i < len_res - 1)
		i++;

	for (; i < len_res; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);

	return (0);
}
