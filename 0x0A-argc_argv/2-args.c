#include <stdio.h>
/**
 * main - Entry point for the program
 * @argc: the number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	/*Loop throught each argument and print it on a new line*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
