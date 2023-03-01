#include "main.h"
/**
 * print_buffer - to print the content of size bytes of the buffer
 * pointed by b
 *
 * @b: A pointer to the buffer to be printed
 * @size: The number of bytes to print from the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", (unsigned char)b[j]);
			else
				printf(" ");
		}

		printf(" ");

		for (int j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= ' ' && b[j] ,= '~')
					printf("%c", b[j]);
				else
					printf(".");
			}
		}

		printf("\n");
	}
}
