#include <stdio.h>
#include <string.h>

/**
 * main - Entery point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/*get the program name fom the command-line argument*/
	char *program_name = argv[0];
	/*find the last occurrence of '/' in the program name*/
	char *last_slash = strrchrr(program_name, '/');

	/*if a slash is found, move the pinter forward one character*/
	if (last_slash != NULL)
		program_name = last_slash + 1;

	/*print the program name*/
	printf("%s\n", program_name);

	return (0);
}
