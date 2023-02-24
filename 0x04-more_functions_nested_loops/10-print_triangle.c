#include "main.h"
/**
 * print_triangle - to print a traingle, followed by a new line
 * size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (int k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
