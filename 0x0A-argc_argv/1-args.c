#include <stdio.h>
/**
 * main - Entery point for the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num_args;

	num_args = argc - 1;

	printf("%d\n", num_args);

	return (0);
}
