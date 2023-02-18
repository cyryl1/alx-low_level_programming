#include <stdio.h>
/**
 * main - Entry function
 *
 * description: To print numbers in base 16
 *
 * Return: alwyas 0 (success)
 */

int main(void)
{
	int i, j = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (j < 6)
	{
		putchar(j + 'a');
		j++;
	}

	putchar('\n');
	return (0);
}
