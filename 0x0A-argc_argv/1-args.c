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
	int num_arrgs;

	/* Calculate the number of arguments passed, excluding the program name*/
	num_args = argc - 1;

	/* Print the number of arguments followed by a newline character*/
	printf("%d\n", num_args);

	return (0);
}
